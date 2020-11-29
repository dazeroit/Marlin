#pragma once

#ifndef BED_SENSOR
    #define BED_SENSOR epcos100k
#endif

#ifndef BED_TEMP_RESIDENCY_TIME
    #define BED_TEMP_RESIDENCY_TIME 10
#endif

#ifndef BED_TEMP_WINDOW
    #define BED_TEMP_WINDOW 1
#endif

#ifndef BED_TEMP_HYSTERESIS
    #define BED_TEMP_HYSTERESIS 3
#endif

#ifndef BED_SENSOR_MINTEMP
    #define BED_SENSOR_MINTEMP 5
#endif

#ifndef BED_SENSOR_MAXTEMP
    #define BED_SENSOR_MAXTEMP 150
#endif

#ifndef BED_PID
    #define BED_PID false
#endif

#ifndef BED_LIMIT_SWITCHING
    #define BED_LIMIT_SWITCHING false
#endif

#ifndef BED_MAX_POWER
    #define BED_MAX_POWER 255
#endif

#ifndef BED_MIN_POWER
    #define BED_MIN_POWER 0
#endif

#ifndef BED_PID_DEBUG
    #define BED_PID_DEBUG false
#endif

#ifndef BED_PID_KP
    #define BED_PID_KP 10.00
#endif

#ifndef BED_PID_KI
    #define BED_PID_KI 0.023
#endif

#ifndef BED_PID_KD
    #define BED_PID_KD 305.40
#endif

#ifndef BED_THERMAL_RUNAWAY
    #define BED_THERMAL_RUNAWAY true
#endif
//
#ifndef BED_X_SIZE
    #define BED_X_SIZE 200
#endif

#ifndef BED_Y_SIZE
    #define BED_Y_SIZE 200
#endif

#ifndef BED_CENTER_AT_ORIGIN
    #define BED_CENTER_AT_ORIGIN false
#endif

#ifndef BED_SKEW_CORRECTION
    #define BED_SKEW_CORRECTION false
#endif

#ifndef BED_SKEW_CORRECTION_FOR_Z
    #define BED_SKEW_CORRECTION_FOR_Z false
#endif

#ifndef BED_SKEW_XY_DIAG_AC
    #define BED_SKEW_XY_DIAG_AC 282.8427124746
#endif

#ifndef BED_SKEW_XY_DIAG_BD
    #define BED_SKEW_XY_DIAG_BD 282.8427124746
#endif

#ifndef BED_SKEW_XY_SIDE_AD
    #define BED_SKEW_XY_SIDE_AD 200
#endif

#ifndef BED_SKEW_XZ_DIAG_BD
    #define BED_SKEW_XZ_DIAG_BD 282.8427124746
#endif
#ifndef BED_SKEW_YZ_DIAG_AC
    #define BED_SKEW_YZ_DIAG_AC 282.8427124746
#endif
#ifndef BED_SKEW_YZ_DIAG_BD
    #define BED_SKEW_YZ_DIAG_BD 282.8427124746
#endif
#ifndef BED_SKEW_YZ_SIDE_AD
    #define BED_SKEW_YZ_SIDE_AD 200
#endif
#ifndef BED_SKEW_XZ_SKEW_FACTOR
    #define BED_SKEW_XZ_SKEW_FACTOR 0.0
#endif
#ifndef BED_SKEW_YZ_SKEW_FACTOR
    #define BED_SKEW_YZ_SKEW_FACTOR 0.0
#endif

#ifndef BED_SKEW_CORRECTION_GCODE
    #define BED_SKEW_CORRECTION_GCODE false
#endif

/***********************************************************************/
#if __has_include(STRINGIFY(../thermistors/BED_SENSOR.h))
    #include LOAD_CONFIG(../thermistors/BED_SENSOR)
#endif

#if ENABLED(BED_PID)
    #undef BED_LIMIT_SWITCHING
#elif ENABLED(BED_LIMIT_SWITCHING)
    #undef BED_PID
#endif
