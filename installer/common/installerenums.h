#pragma once

namespace wsl {

enum INSTALLER_STATE {
    STATE_INIT,
    STATE_EXTRACTING,
    STATE_CANCELED,
    STATE_FINISHED,
    STATE_ERROR,
    STATE_LAUNCHED,
    STATE_EXTRACTED
};

enum INSTALLER_ERROR {
    ERROR_OTHER = 1,
    ERROR_PERMISSION,
    ERROR_KILL,
    ERROR_CONNECT_HELPER,
    ERROR_DELETE,
    ERROR_UNINSTALL,
    ERROR_MOVE_CUSTOM_DIR,
    ERROR_CUSTOM_DIR_NOT_EMPTY,
    ERROR_DELETE_CUSTOM_DIR
};

}