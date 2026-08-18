#include <string.h>

#include "rtsyn/internal/_rtsyn_module_slug_.h"
#include "rtsyn/internal/_rtsyn_module_slug_/process.h"

rtsyn_abi_status_t RTSYN_ABI_CALL
rtsyn__rtsyn_module_slug__process(void *instance, const rtsyn_abi_runtime_context_t *context)
{
    rtsyn__rtsyn_module_slug__instance_t *_rtsyn_module_slug_ =
        (rtsyn__rtsyn_module_slug__instance_t *)instance;
    rtsyn_abi_status_t status = RTSYN_ABI_STATUS_OK;

    if (!_rtsyn_module_slug_ || !context || !context->api || !context->api->read || !context->api->write)
    {
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }

    /* RTSYN_TEMPLATE:_rtsyn_process_reads_ */

    /* RTSYN_TEMPLATE:_rtsyn_process_writes_ */
    return RTSYN_ABI_STATUS_OK;
}
