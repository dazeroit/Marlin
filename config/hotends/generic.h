#pragma once

#ifndef HOTEND_SENSOR_0
    #define HOTEND_SENSOR_0 epcos100k
#endif

#ifndef HOTEND_SENSOR_1
    #define HOTEND_SENSOR_1 0
#endif

#ifndef HOTEND_SENSOR_2
    #define HOTEND_SENSOR_2 0
#endif

#ifndef HOTEND_SENSOR_3
    #define HOTEND_SENSOR_3 0
#endif

#ifndef HOTEND_SENSOR_4
    #define HOTEND_SENSOR_4 0
#endif

#ifndef HOTEND_SENSOR_5
    #define HOTEND_SENSOR_5 0
#endif

#ifndef HOTEND_SENSOR_6
    #define HOTEND_SENSOR_6 0
#endif

#ifndef HOTEND_SENSOR_7
    #define HOTEND_SENSOR_7 0
#endif

#ifndef HOTEND_DUMMY_SENSOR_998_VALUE
    #define HOTEND_DUMMY_SENSOR_998_VALUE 25
#endif

#ifndef HOTEND_DUMMY_SENSOR_999_VALUE
    #define HOTEND_DUMMY_SENSOR_999_VALUE 100
#endif

#ifndef HOTEND_MAX31865_SENSOR_OHMS
    #define HOTEND_MAX31865_SENSOR_OHMS 100
#endif

#ifndef HOTEND_MAX31865_CALIBRATION_OMHS
    #define HOTEND_MAX31865_CALIBRATION_OMHS 430
#endif

#ifndef HOTEND_SENSOR_1_AS_REDUNDANT
    #define HOTEND_SENSOR_1_AS_REDUNDANT false
#endif

#ifndef HOTEND_SENSOR_PROBE
    #define HOTEND_SENSOR_PROBE 0
#endif

#ifndef HOTEND_MAX_REDUNDANT_DIFF
    #define HOTEND_MAX_REDUNDANT_DIFF 10
#endif

#ifndef HOTEND_TEMP_RESIDENCY_TIME
    #define HOTEND_TEMP_RESIDENCY_TIME 10
#endif

#ifndef HOTEND_TEMP_WINDOW
    #define HOTEND_TEMP_WINDOW 1
#endif

#ifndef HOTEND_TEMP_HYSTERESIS
    #define HOTEND_TEMP_HYSTERESIS 3
#endif

#ifndef HOTEND_SENSOR_0_MINTEMP
    #define HOTEND_SENSOR_0_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_1_MINTEMP
    #define HOTEND_SENSOR_1_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_2_MINTEMP
    #define HOTEND_SENSOR_2_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_3_MINTEMP
    #define HOTEND_SENSOR_3_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_4_MINTEMP
    #define HOTEND_SENSOR_4_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_5_MINTEMP
    #define HOTEND_SENSOR_5_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_6_MINTEMP
    #define HOTEND_SENSOR_6_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_7_MINTEMP
    #define HOTEND_SENSOR_7_MINTEMP 5
#endif

#ifndef HOTEND_SENSOR_0_MAXTEMP
    #define HOTEND_SENSOR_0_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_1_MAXTEMP
    #define HOTEND_SENSOR_1_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_2_MAXTEMP
    #define HOTEND_SENSOR_2_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_3_MAXTEMP
    #define HOTEND_SENSOR_3_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_4_MAXTEMP
    #define HOTEND_SENSOR_4_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_5_MAXTEMP
    #define HOTEND_SENSOR_5_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_6_MAXTEMP
    #define HOTEND_SENSOR_6_MAXTEMP 275
#endif

#ifndef HOTEND_SENSOR_7_MAXTEMP
    #define HOTEND_SENSOR_7_MAXTEMP 275
#endif

#ifndef HOTEND_PID
    #define HOTEND_PID true
#endif

#ifndef HOTEND_BANG_MAX
    #define HOTEND_BANG_MAX 255
#endif

#ifndef HOTEND_PID_MAX
    #define HOTEND_PID_MAX HOTEND_BANG_MAX
#endif

#ifndef HOTEND_PID_K1
    #define HOTEND_PID_K1 0.95
#endif

#ifndef HOTEND_PID_EDIT_MENU
    #define HOTEND_PID_EDIT_MENU false
#endif

#ifndef HOTEND_PID_AUTOTUNE_MENU
    #define HOTEND_PID_AUTOTUNE_MENU false
#endif

#ifndef HOTEND_PID_PARAMS_PER_HOTEND
    #define HOTEND_PID_PARAMS_PER_HOTEND false
#endif

#ifndef HOTEND_PID_KP_LIST
    #define HOTEND_PID_KP_LIST { 22.20, 22.20 }
#endif

#ifndef HOTEND_PID_KI_LIST
    #define HOTEND_PID_KI_LIST { 1.08, 1.08}
#endif

#ifndef HOTEND_PID_KD_LIST
    #define HOTEND_PID_KD_LIST { 114.00, 114.00}
#endif

#ifndef HOTEND_PID_KP
    #define HOTEND_PID_KP 22.20
#endif

#ifndef HOTEND_PID_KI
    #define HOTEND_PID_KI 1.08
#endif

#ifndef HOTEND_PID_KD
    #define HOTEND_PID_KD 114.00
#endif

#ifndef HOTEND_THERMAL_RUNAWAY
    #define HOTEND_THERMAL_RUNAWAY true
#endif

/***********************************************************************/
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_0.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_0)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_1.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_1)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_2.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_2)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_3.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_3)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_4.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_4)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_5.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_5)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_6.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_6)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_7.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_7)
#endif
#if __has_include(STRINGIFY(../thermistors/HOTEND_SENSOR_PROBE.h))
    #include LOAD_CONFIG(../thermistors/HOTEND_SENSOR_PROBE)
#endif
/***********************************************************************/