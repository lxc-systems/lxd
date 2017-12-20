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

namespace Lxd\Endpoints\Containers;

use Lxd\Endpoint;

/**
 * Lxd\Endpoints\Containers\Files
 *
 * Provides containers files facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/containers/files.zep
 */
final class Files extends Endpoint
{
    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "containers";
    
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
     * Read the contents of a file in container
     *
     * <code>
     *   $lxd->containers->files->read('conainer-name', '/path/to/file');
     * </code>
     *
     * @param  string name     Name of container
     * @param  string filepath Full path to a file within the container
     * @return string
     */
    public function read(string! name, string! filepath) -> string
    {
        return this->curl->get(
            this->getBase(Files::ENDPOINT)."/".name."/files",
            [
                "path" : filepath
            ]
        );
    }

    /**
     * Write to or Create a file in container
     *
     * <code> 
     *   $lxd->containers->files->write('container-name', '/path/to/file', 'File Contents', 0644, 0, 0);
     * </code>
     *
     * @param  string name     Name of container
     * @param  string filepath Path to the output file in the container
     * @param  string data     Data to write to the file
     * @param  octal mode      Permission bits in octal format e.g 0644
     * @param  int   uid       System user id, 0 = root
     * @param  int   gid       System group id, 0 = root
     * @return array
     */
    public function write(
        string! name, 
        string! filepath, 
        string! data, 
        var mode = null,
        int! uid = 0, 
        int! gid = 0
    ) -> array
    {
        var headers = [];

        if is_int(uid) {
            let headers[] = "X-LXD-uid: ".intval(uid);
        }

        if is_int(gid) {
            let headers[] = "X-LXD-gid: ".intval(gid);
        }

        if mode !== null && is_numeric(mode) {
            let headers[] = "X-LXD-mode: ".sprintf("%04d", decoct(mode));
        }

        return this->curl->post(
            this->getBase(Files::ENDPOINT)."/".name."/files?path=".filepath,
            data,
            headers
        );
    }

    /**
     * Delete a file in container
     *
     * <code>
     *   $lxd->containers->files->delete('container-name', '/path/to/file');
     * </code>
     *
     * @param  string name     Name of container
     * @param  string filepath Path of the file to delete
     * @return array
     */
    public function delete(string! name, string! filepath) -> array
    {
        return this->curl->delete(
            this->getBase(Files::ENDPOINT)."/".name."/files?path=".filepath
        );
    }

}
