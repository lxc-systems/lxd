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
 * Lxd\Endpoints\Profiles
 *
 * Provides profiles facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/profiles.zep
 */
final class Profiles extends Endpoint
{    
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "profiles";

    /**
     * @var
     */
    protected curl;

    /**
     * Class construct
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
     * List of all profiles.
     *
     * <code>
     *  $lxd->profiles->all();
     * </code>
     *
     * @return array
     */
    public function all() -> array
    {
        var key, value, response = [
            "metadata": []
        ];

        let response = this->curl->get(
            this->getBase(Profiles::ENDPOINT)
        );

        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"] {
            let response["metadata"][key] = str_replace(
                "/".this->getVersion()."/".Profiles::ENDPOINT."/", null, value
            );
        }

        return response;
    }

    /**
     * Show information on a profile.
     *
     * <code>
     *  $lxd->profiles->info('profile-name');
     * </code>
     *
     * @param  string name  Name of profile
     * @return array
     */
    public function info(string! name) -> array
    {
        var key, value, response = [
            "metadata": [
                "used_by" : []
            ]
        ];

        let response = this->curl->get(
            this->getBase(Profiles::ENDPOINT)."/".name
        );

        if response["type"] === "error" {
            return response;
        }

        for key, value in response["metadata"]["used_by"] {
            let response["metadata"]["used_by"][key] = str_replace(
                "/".this->getVersion()."/".\Lxd\Endpoints\Containers::ENDPOINT."/", null, value
            );
        }

        return response;
    }

    /**
     * Create a new profile.
     *
     * <code>
     *  $lxd->profiles->create(
     *      'profile-name',
     *      'My new profile',
     *      ["limits.memory" => "1GB"],
     *      [
     *          "kvm" => [
     *              "type" => "unix-char",
     *              "path" => "/dev/kvm"
     *          ],
     *      ]
     *  );
     * </code>
     *
     * @param  string name        Name of profile
     * @param  string description Description of profile
     * @param  array  config      Config for profile
     * @param  array  devices     Devices for profile
     * @return array
     */
    public function create(string! name, string! description = "", array! config = [], array! devices = []) -> array
    {
        var profile = [
            "name" : name
        ];

        if !empty(description) {
            let profile["description"] = description;   
        }

        if !empty(config) {
            let profile["config"] = config;   
        }

        if !empty(devices) {
            let profile["devices"] = devices;   
        }

        return this->curl->post(
            this->getBase(Profiles::ENDPOINT),
            profile
        );
    }

    /**
     * Update profile.
     *
     * <code>
     *  $lxd->profiles->update(
     *      'profile-name',
     *      'My new profile',
     *      ["limits.memory" => "1GB"],
     *      [
     *          "kvm" => [
     *              "type" => "unix-char",
     *              "path" => "/dev/kvm"
     *          ],
     *      ]
     *  );
     * </code>
     *
     * @param  string name        Name of profile
     * @param  string description Description of profile
     * @param  array  config      Config for profile
     * @param  array  devices     Devices for profile
     * @return array
     */
    public function update(string! name, string! description = "", array! config = [], array! devices = []) -> array
    {
        var profile = [];

        if !empty(description) {
            let profile["description"] = description;   
        }

        if !empty(config) {
            let profile["config"] = config;   
        }

        if !empty(devices) {
            let profile["devices"] = devices;   
        }

        return this->curl->patch(
            this->getBase(Profiles::ENDPOINT)."/".name,
            profile
        );
    }   

    /**
     * Replace profile.
     *
     * <code>
     *  $lxd->profiles->replace(
     *      'profile-name',
     *      'My new profile',
     *      ["limits.memory" => "1GB"],
     *      [
     *          "kvm" => [
     *              "type" => "unix-char",
     *              "path" => "/dev/kvm"
     *          ],
     *      ]
     *  );
     * </code>
     *
     * @param  string name        Name of profile
     * @param  string description Description of profile
     * @param  array  config      Config for profile
     * @param  array  devices     Devices for profile
     * @return array
     */
    public function replace(string! name, string! description = "", array! config = [], array! devices = []) -> array
    {
        var profile = [];

        if !empty(description) {
            let profile["description"] = description;   
        }

        if !empty(config) {
            let profile["config"] = config;   
        }

        if !empty(devices) {
            let profile["devices"] = devices;   
        }

        return this->curl->put(
            this->getBase(Profiles::ENDPOINT)."/".name,
            profile
        );
    }

    /**
     * Rename profile.
     *
     * <code>
     *  $lxd->profiles->rename('profile-name', 'new-profile-name');
     * </code>
     *
     * @param  string name     Name of profile
     * @param  string newName  New name of profile
     * @return array
     */
    public function rename(string! name, string! newName) -> array
    {
        var profile = [
            "name" : newName
        ];

        return this->curl->post(
            this->getBase(Profiles::ENDPOINT)."/".name,
            profile
        );
    }

    /**
     * Remove a profile.
     *
     * <code>
     *  $lxd->profiles->remove('profile-name');
     * </code>
     *
     * @param  string  name  Name of profile
     * @return array
     */
    public function remove(string! name) -> array
    {
        return this->curl->delete(
            this->getBase(Profiles::ENDPOINT)."/".name
        );
    }

    /**
     * Delete a profile - alias of remove.
     *
     * <code>
     *  $lxd->profiles->delete('profile-name');
     * </code>
     *
     * @param  string  name  Name of profile
     * @return array
     */
    public function delete(string! name) -> array
    {
        return this->remove(name);
    }

}
