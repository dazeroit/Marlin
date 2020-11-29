#pragma once

#define PASSWORD_FEATURE

#ifndef PASSWORD_LENGTH
    #define PASSWORD_LENGTH 4
#endif

#ifndef PASSWORD_ON_STARTUP
    #define PASSWORD_ON_STARTUP true
#endif

#ifndef PASSWORD_UNLOCK_GCODE
    #define PASSWORD_UNLOCK_GCODE true
#endif

#ifndef PASSWORD_CHANGE_GCODE
    #define PASSWORD_CHANGE_GCODE true
#endif

#ifndef PASSWORD_ON_SD_PRINT_MENU 
    #define PASSWORD_ON_SD_PRINT_MENU false
#endif

#ifndef PASSWORD_AFTER_SD_PRINT_END
    #define PASSWORD_AFTER_SD_PRINT_END false
#endif

#ifndef PASSWORD_AFTER_SD_PRINT_ABORT
    #define PASSWORD_AFTER_SD_PRINT_ABORT
#endif

#include "../../Marlin/Configuration_secure.h"       // External file with PASSWORD_DEFAULT_VALUE
