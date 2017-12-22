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
 * Lxd\Endpoints\Operations
 *
 * Provides operations facilities to the API
 * @see https://github.com/lxc-systems/lxd/blob/master/lxd/endpoints/operations.zep
 */
final class Operations extends Endpoint
{

    /**
     * @var - Base API endpoint
     */
    const ENDPOINT = "operations";

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
     * List of all operations.
     *
     * <code>
     *  $lxd->operations->all();
     * </code>
     *
     * @return array
     */
    public function all() -> array
    {
        var response = this->curl->get(this->getBase(Operations::ENDPOINT));

        if response["type"] === "error" {
            return response;
        }

        var ret = [], item, key, operation_id;
        for key, item in (array) response["metadata"] {
            for operation_id in item {
                let ret[key][] = this->stripEndpoint(operation_id);
            }
        }
        return ret;
    }

    /**
     * Get information on an operation.
     *
     * <code>
     *  $lxd->operations->info('operation-uuid');
     * </code>
     *
     * @param  string uuid  Operation uuid
     * @return array
     */
    public function info(string! uuid) -> array
    {
        return this->curl->get(this->getBase(Operations::ENDPOINT)."/".uuid);
    }

    /**
     * Change operation to cancelling state.
     *
     * <code>
     *  $lxd->operations->cancel('operation-uuid');
     * </code>
     *
     * @param  string uuid  Operation uuid
     * @return array
     */
    public function cancel(string! uuid) -> bool
    {
        return this->curl->delete(this->getBase(Operations::ENDPOINT)."/".uuid);
    }

    /**
     * Wait for an operation to complete.
     *
     * <code>
     *  $lxd->operations->wait('operation-uuid', 30);
     * </code>
     *
     * @param  string uuid     Operation uuid
     * @param  int    timeout  Time to wait for operation
     * @return array
     */
    public function wait(string! uuid, int! timeout = 0) -> array
    {
        string endpoint;

        let endpoint = this->getBase(Operations::ENDPOINT)."/".uuid."/wait";

        if timeout > 0 {
            let endpoint .= "?timeout=".timeout;
        }

        return this->curl->get(endpoint);
    }

}
