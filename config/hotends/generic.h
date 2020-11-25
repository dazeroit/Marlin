#pragma once

#define HOTEND_MULTIPLE_NOZZLE      false
#define CARTDRIGE_HEATER_WATT       40
#define NUMBERS_OF_THERMISTORS      1
#define THERMISTOR_TYPE_T0          1
//#define THERMISTOR_TYPE_T1          0
//#define THERMISTOR_TYPE_T2          0
//#define THERMISTOR_TYPE_T3          0
//#define THERMISTOR_TYPE_T4          0
//#define THERMISTOR_TYPE_T5          0
//#define THERMISTOR_TYPE_T6          0
//#define THERMISTOR_TYPE_T7          0
#define HAS_REDUNDANT_THERMISTOR    false
#define REDUNDANT_MAX_TEMP_DIFF     10

#define TEMP_TUNING_T0_MINTEMP      5
//#define TEMP_TUNING_T1_MINTEMP      5
//#define TEMP_TUNING_T2_MINTEMP      5
//#define TEMP_TUNING_T3_MINTEMP      5
//#define TEMP_TUNING_T4_MINTEMP      5
//#define TEMP_TUNING_T5_MINTEMP      5
//#define TEMP_TUNING_T6_MINTEMP      5
//#define TEMP_TUNING_T7_MINTEMP      5

#define TEMP_TUNING_T0_MAXTEMP      275
//#define TEMP_TUNING_T1_MAXTEMP      275
//#define TEMP_TUNING_T2_MAXTEMP      275
//#define TEMP_TUNING_T3_MAXTEMP      275
//#define TEMP_TUNING_T4_MAXTEMP      275
//#define TEMP_TUNING_T5_MAXTEMP      275
//#define TEMP_TUNING_T6_MAXTEMP      275
//#define TEMP_TUNING_T7_MAXTEMP      275

#define TEMP_TUNING_PERMANENCE_SECONDS  10
#define TEMP_TUNING_PROXIMITY_GRADES    1
#define TEMP_TUNING_HYSTERESIS_GRADES   3
#define TEMP_TUNING_MINTEMP_EXTRUSION   170

#define COLD_EXTRUSION  false

#define PID_TUNING  true
#define PID_MENU    true
#define PID_KP      22.20
#define PID_KI      1.08
#define PID_KD      114.00
#define PID_KP_LIST {  22.20,  22.20 }
#define PID_KI_LIST {   1.08,   1.08 }
#define PID_KD_LIST { 114.00, 114.00 }