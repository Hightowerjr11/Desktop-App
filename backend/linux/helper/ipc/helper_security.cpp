#include <limits.h>
#include <fstream>
#include <grp.h>
#include <sstream>
#include <sys/types.h>

#include "helper_security.h"
#include "../logger.h"

#include "../../../../client/common/utils/executable_signature/executable_signature.h"

bool HelperSecurity::verifySignature()
{
#if defined(USE_SIGNATURE_CHECK)
    ExecutableSignature sigCheck;
    bool result = sigCheck.verify("/opt/windscribe/Windscribe");

    if (!result) {
        Logger::instance().out("Signature verification failed for Windscribe: %s", sigCheck.lastError().c_str());
    }
    return result;
#else
    return true;
#endif
}
