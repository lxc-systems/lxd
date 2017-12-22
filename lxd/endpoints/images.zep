/*
 +------------------------------------------------------------------------+
 | PHP LXD Extension                                                      |
 +------------------------------------------------------------------------+
 | Copyright (c)2017-2017 LXC.systems (https://github.com/lxc-systems/lxd)|
 +------------------------------------------------------------------------+
 | This source file is subject to GNU General Public License v2.0 License |
 | that is bundled with this package in the file LICENSE.                 |
 |                                                                        |
 | If you did not receive a copy of the license and are unable to         |
 | obtain it through the world-wide-web, please send an email             |
 | to license@lxd.systems so we can send you a copy immediately.          |
 +------------------------------------------------------------------------+
 | Authors: Lawrence Cherone <lawrence@lxd.systems>                       |
 +------------------------------------------------------------------------+
 */

namespace Lxd\Endpoints;

use Lxd\Endpoint;

/**
 * Lxd\Endpoints\Images
 *
 * Provides image facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/images.zep
 */
final class Images extends Endpoint
{    
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "images";

    /**
     * @var
     */
    protected curl;

    /**
     * Class construct.
     *
     * @param  array          config Config array which holds object configuration
     * @param  <Lxd\Lib\Curl> curl
     * @return void
     */
    public function __construct(array! config, <Lxd\Lib\Curl> curl) -> void
    {
        parent::__construct(config, curl, __CLASS__);
    }

    /**
     * List of all images.
     *
     * <code>
     *  // images on connected server
     *  $lxd->images->all();
     *
     *  // images on public image server. (URL must include /1.0/images)
     *  $lxd->images->all("https://images.linuxcontainers.org:8443/1.0/images");
     * </code>
     *
     * @return array
     */
    public function all(string! url = null) -> array
    {
        var key, value, response = [
            "metadata": []
        ];

        if url === null {
            let url = (string) this->getBase(Images::ENDPOINT);
        }

        if parse_url(url, PHP_URL_PATH) !== "/".this->getVersion()."/images" {
            throw "Invalid image server URL";
        }

        let response = this->curl->get(
            url
        );

        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"] {
            let response["metadata"][key] = str_replace(
                "/".this->getVersion()."/".Images::ENDPOINT."/", null, value
            );
        }

        return response;
    }

    /**
     * Get image info.
     *
     * <code>
     *  // image info on connected server
     *  $lxd->images->info(null, "images-fingerprint", "secret");
     *
     *  // images on public image server. (URL must include /1.0/images)
     *  $lxd->images->info("https://uk.images.linuxcontainers.org:8443/1.0/images", "images-fingerprint"));
     * </code>
     *
     * @param  null|string  url          null or full URL to public image endpoint
     * @param  string       fingerprint  Fingerprint of image
     * @param  string       secret       Secret for untrusted client
     * @return array
     */
    public function info(string! url = null, string! fingerprint, string! secret = null) -> array
    {
        var param = [];

        if url === null {
            let url = (string) this->getBase(Images::ENDPOINT);
        }

        if parse_url(url, PHP_URL_PATH) !== "/".this->getVersion()."/images" {
            throw "Invalid image server URL";
        }

        if !empty(secret) {
            let param["secret"] = secret;
        }

        return this->curl->get(url."/".fingerprint, param);
    }

    /**
     * Create a new image.
     *
     * <code>
     *  $lxd->images->create(
     *      [],  // image options
     *      [],  // API headers
     *      true // wait for operation
     *  );
     * </code>
     *
     * @param  array    options  New image options
     * @param  array    headers  Endpoint headers
     * @param  boolean  wait     Wait for image to create
     * @return array
     */
    public function create(array! options, array! headers = [], boolean! wait = false) -> array
    {
        var response;

        let response = this->curl->post(
            this->getBase(Images::ENDPOINT), 
            options,
            headers
        );

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }

    /**
     * Create from remote.
     *
     * <code>
     *  // Import an image by alias
     *  $lxd->images->createFromRemote(
     *      "https://images.linuxcontainers.org:8443",
     *      [
     *          "alias" => "ubuntu/xenial/amd64",
     *      ]
     *  );
     *
     *  // Import an image by fingerprint
     *  $lxd->images->createFromRemote(
     *      "https://images.linuxcontainers.org:8443",
     *      [
     *          "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
     *      ]
     *  );     
     *
     *  // Import an image by fingerprint, set auto update and wait for pull
     *  $lxd->images->createFromRemote(
     *      "https://images.linuxcontainers.org:8443",
     *      [
     *          "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
     *      ],
     *      true,
     *      true
     *  );
     * </code>
     *
     * @param  array    options  New image options
     * @param  array    headers  Endpoint headers
     * @param  boolean  wait     Wait for image to create
     * @return array
     */
    public function createFromRemote(
        string! server,
        array! options,
        boolean! autoUpdate = false,
        boolean! wait = false
    ) -> array
    {
        var opts;
        var source = this->getSource(options);

        if isset(options["protocol"]) && !in_array(options["protocol"], ["lxd", "simplestreams"]) {
            throw "Invalid protocol.  Valid choices: lxd, simplestreams";
        }

        var only = [
            "secret",
            "protocol",
            "certificate"
        ];

        var remoteOptions = array_intersect_key(options, array_flip(only));

        let opts                     = this->getOptions($options);
        let opts["auto_update"]      = autoUpdate;
        let opts["source"]           = array_merge(source, remoteOptions);
        let opts["source"]["type"]   = "image";
        let opts["source"]["mode"]   = "pull";
        let opts["source"]["server"] = server;

        return this->create(opts, [], wait);
    }

    /**
     * Create an image from a container.
     *
     * <code>
     *  // Create a private image from container.
     *  $lxd->images->createFromContainer('container-name');
     *
     *  // Create a public image from container
     *  $lxd->images->createFromContainer(
     *      'container-name',
     *      [
     *          'public' => true
     *      ]
     *  );     
     *
     *  // Create an image from container, store properties with the new image and override its filename.
     *  $lxd->images->createFromContainer(
     *      'container-name',
     *      [
     *          'filename'   => 'ubuntu-trusty.tar.gz',
     *          'properties' => ['os' => 'Ubuntu'],
     *      ]
     *  );
     * </code>
     *
     * @param  array    options  New image options
     * @param  array    headers  Endpoint headers
     * @param  boolean  wait     Wait for image to create
     * @return array
     */
    public function createFromContainer(string! name, array! options, boolean! wait = false) -> array
    {
        var opts = [];
        let opts                   = this->getOptions(options);
        let opts["source"]["type"] = "container";
        let opts["source"]["name"] = name;

        return this->create(opts, [], wait);
    }

    /**
     * Create an image from a snapshot.
     *
     * <code>
     *  // Create a private image from snapshot
     *  $lxd->images->createFromSnapshot("container_name", "snapshot_name");
     *
     *  // Create a public image from snapshot
     *  $lxd->images->createFromSnapshot(
     *      "container_name",
     *      "snapshot_name",
     *      [
     *          "public" => true
     *      ]
     *  );
     *
     *  // Store properties with the new image, and override its filename
     *  $lxd->images->createFromSnapshot(
     *      "container-name",
     *      "snapshot-name",
     *      [
     *          "filename"   => "ubuntu-trusty.tar.gz",
     *          "properties" => ["os" => "Ubuntu"]
     *      ]
     *  );
     * </code>
     *
     * @param  string  container The name of the container
     * @param  string  snapshot  The name of the snapshot
     * @param  array   options   Options to create the container
     * @param  bool    wait      Wait for operation to finish
     * @return array
     */
    public function createFromSnapshot(string! container, string! snapshot, array! options, boolean! wait = false) -> array
    {
        var opts = [];
        let opts                   = this->getOptions(options);
        let opts["source"]["type"] = "snapshot";
        let opts["source"]["name"] = container."/".snapshot;

        return this->create(opts, [], wait);
    }

    /**
     * Replace the configuration of a image.
     *
     * Configuration is overwritten, not merged. Clients should
     * first call the info method to obtain the current configuration of a
     * image. The resulting objects metadata should be modified and then passed to
     * the update method.
     *
     * <code>
     *  $image = $lxd->images->info(null, 'b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087');
     *  $image['metadata']['public'] = true;
     *  $lxd->images->replace('container-name', $image['metadata']);
     * </code>
     *
     * @param  string   fingerprint  Fingerprint of image
     * @param  array    options      Options to replace
     * @param  boolean  wait         Wait for operation to finish
     * @return array
     */
    public function replace(string! fingerprint, array! options, boolean! wait = false) -> array
    {
        var response;

        let response = this->curl->put(
            this->getBase(Images::ENDPOINT)."/".fingerprint, 
            options
        );

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }

    /**
     * Delete an image.
     *
     * <code>
     *  $lxd->images->remove('b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087', true);
     * </code>
     *
     * @param  string  fingerprint  Fingerprint of image
     * @param  bool    wait         Wait for operation to finish
     * @return array
     */
    public function remove(string! fingerprint, boolean! wait = false) -> array
    {
        var response;
        let response = this->curl->delete(this->getBase(Images::ENDPOINT)."/".fingerprint);

        if response["type"] !== "error" && wait {
            let response = this->curl->get(
                this->getBase(\Lxd\Endpoints\Operations::ENDPOINT)."/".response["metadata"]["id"]."/wait",
                [
                    "timeout" : this->config["timeout"]
                ]
            );
        }

        return response;
    }

    /**
     * Get image source attribute.
     *
     * @param  array  options  Options for creating image
     * @return array
     */
    private function getSource(array! options) -> array|<Exception>
    {
        var attr, attrs = [
            "alias", "fingerprint"
        ];

        for attr in attrs {
            if isset options[attr] && !empty options[attr] {
                return [attr : options[attr]];
            }
        }

        throw "Alias or Fingerprint must be set";
    }    

    /**
     * Get the options for creating image.
     *
     * @param  string name    Name of image
     * @param  array  options Options for creating image
     * @return array
     */
    private function getOptions(array! options) -> array
    {
        var only = [
            "filename",
            "public",
            "properties",
            "auto_update"
        ];

        return (array) array_intersect_key(options, array_flip(only));
    }

}
