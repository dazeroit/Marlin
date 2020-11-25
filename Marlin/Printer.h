#pragma once
#include "../config/printers.h"
#include "../config/motions.h"
#include "../config/hotends.h"
#include "../config/extruders.h"
#include "../config/Printer_def.h"

#define PRINTER_NAME            ENDER_3

#define PRINTER_KINEMATIC       MOTION_CARTESIAN

#define POWER_SUPPLY_VOLTAGE    24
#define POWER_SUPPLY_WATT       300

#define PRINTER_AXIS_X_DIR      MOTION_FORWARD // MOTION_BACKWARD
#define PRINTER_AXIS_Y_DIR      MOTION_BACKWARD // MOTION_BACKWARD
#define PRINTER_AXIS_Z_DIR      MOTION_FORWARD // MOTION_BACKWARD
#define PRINTER_AXIS_E0_DIR     MOTION_FORWARD // MOTION_BACKWARD

#define NUMBERS_OF_AXES_X       1
#define NUMBERS_OF_AXES_Y       1
#define NUMBERS_OF_AXES_Z       1

#define STEPS_MM_AXIS_X         80
#define STEPS_MM_AXIS_Y         80
#define STEPS_MM_AXIS_Z         400

#define HOTEND_TYPE             HOTEND_GENERIC
#define EXTRUDER_TYPE           TITAN_BOWDEN_EXTRUDER
//#define MAXLENGTH_EXTRUSION_OVERRIDE    450    
//#define FILAMENT_DIAMETER_OVERRIDE      1.75
#define NUMBERS_OF_EXTRUDERS    1
#define STEPS_MM_EXTRUDER_E0    93


#define HAS_THERMAL_CHAMBER     false
#define THERMAL_RUNAWAY         true

#define ENDSTOP_X_MIN           true
#define ENDSTOP_X_MAX           false
#define ENDSTOP_X_MIN_INVERTING false
#define ENDSTOP_X_MAX_INVERTING false

#define ENDSTOP_Y_MIN           true
#define ENDSTOP_Y_MAX           false
#define ENDSTOP_Y_MIN_INVERTING false
#define ENDSTOP_Y_MAX_INVERTING false

#define ENDSTOP_Z_MIN           true
#define ENDSTOP_Z_MAX           false
#define ENDSTOP_Z_MIN_INVERTING false
#define ENDSTOP_Z_MAX_INVERTING false

#define ENDSTOP_PROBE_ON_Z              false
#define ENDSTOP_PROBE_ON_Z_INVERTING    false

#define ENDSTOP_INTERRUPTS      false

#define MOTOR_X_FULL_STEPS      200
#define MOTOR_Y_FULL_STEPS      200
#define MOTOR_Z_FULL_STEPS      200
#define MOTOR_E_FULL_STEPS      200

#define MOTOR_X_MICROSTEPS      16
#define MOTOR_Y_MICROSTEPS      16
#define MOTOR_Z_MICROSTEPS      16
#define MOTOR_E_MICROSTEPS      16



     