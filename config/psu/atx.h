#pragma once

#ifndef PSU_CONTROL
    #define PSU_CONTROL true
#endif

#ifndef PSU_NAME
    #define PSU_NAME "ATX"
#endif

#ifndef PSU_ACTIVE_STATE
    #define PSU_ACTIVE_STATE LOW
#endif

#ifndef PSU_DEFAULT_OFF  
    #define PSU_DEFAULT_OFF false
#endif

#ifndef PSU_POWERUP_DELAY
    #define PSU_POWERUP_DELAY 250
#endif

#ifndef PSU_AUTO_POWER_CONTROL
    #define PSU_AUTO_POWER_CONTROL false
#endif

#ifndef PSU_AUTO_POWER_FANS 
    #define PSU_AUTO_POWER_FANS true
#endif

#ifndef PSU_AUTO_POWER_E_FANS
    #define PSU_AUTO_POWER_E_FANS true
#endif

#ifndef PSU_AUTO_POWER_CONTROLLERFAN
    #define PSU_AUTO_POWER_CONTROLLERFAN true
#endif

#ifndef PSU_AUTO_POWER_CHAMBER_FAN
    #define PSU_AUTO_POWER_CHAMBER_FAN true
#endif

#ifndef PSU_AUTO_POWER_E_TEMP
    #define PSU_AUTO_POWER_E_TEMP 0
#endif

#ifndef PSU_AUTO_POWER_CHAMBER_TEMP
    #define PSU_AUTO_POWER_CHAMBER_TEMP 0
#endif

#ifndef PSU_POWER_TIMEOUT
    #define PSU_POWER_TIMEOUT 30
#endif