/*
     _______.____    __    ____  ______   .______       _______  
    /       |\   \  /  \  /   / /  __  \  |   _  \     |       \ 
   |   (----` \   \/    \/   / |  |  |  | |  |_)  |    |  .--.  |
    \   \      \            /  |  |  |  | |      /     |  |  |  |
.----)   |      \    /\    /   |  `--'  | |  |\  \----.|  '--'  |
|_______/        \__/  \__/     \______/  | _| `._____||_______/ 
               _______  __       _______. __    __              
              |   ____||  |     /       ||  |  |  |
              |  |__   |  |    |   (----`|  |__|  | 
              |   __|  |  |     \   \    |   __   | 
              |  |     |  | .----)   |   |  |  |  | 
              |__|     |__| |_______/    |__|  |__| 
              F    I    R    M    W    A    R    E
*/
/***********************************************************************/
#pragma once
#include "Printer.h"
/***********************************************************************/
#define CONFIGURATION_H_VERSION 020007
/***********************************************************************/
// ┌───────────────┐
// │ @section info │
// ├───────────────┤
// │               │
// └───────────────┘

#define STRING_CONFIG_H_AUTOR   "SWORDFISH"
#define CUSTOM_VERSION_FILE Version.h
#define SHOW_BOOTSCREEN

#if ENABLED(PRINTER_CUSTOM_BOOTSCREEN)
    #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if ENABLED(PRINTER_CUSTOM_STATUS_SCREEN)
    #define CUSTOM_STATUS_SCREEN_IMAGE
#endif

/***********************************************************************/
// ┌──────────────────┐
// │ @section machine │
// ├──────────────────┤
// │                  │
// └──────────────────┘

#if ENABLED(PRINTER_SERIAL_PORT_ENABLE)
    #define SERIAL_PORT PRINTER_SERIAL_PORT_ID
#endif

#if ENABLED(PRINTER_SERIAL_PORT_2_ENABLE)
    #define SERIAL_PORT_2 PRINTER_SERIAL_PORT_2_ID
#endif

#define BAUDRATE PRINTER_BAUDRATE

#ifdef PRINTER_MOTHERBOARD
    #define MOTHERBOARD PRINTER_MOTHERBOARD
#endif

#ifdef PRINTER_NAME
    #define CUSTOM_MACHINE_NAME PRINTER_NAME
#endif

#ifdef PRINTER_MACHINE_UUID
    #define MACHINE_UUID PRINTER_MACHINE_UUID
#endif

#if ENABLED(PSU_CONTROL)
    #if ENABLED(PSU_AUTO_POWER_CONTROL)
        #define AUTO_POWER_CONTROL
        #if ENABLED(PSU_AUTO_POWER_FANS)
            #define AUTO_POWER_FANS 
        #endif 
        #if ENABLED(PSU_AUTO_POWER_E_FANS)
            #define AUTO_POWER_E_FANS
        #endif
        #if ENABLED(PSU_AUTO_POWER_CONTROLLERFAN)
            #define AUTO_POWER_CONTROLLERFAN
        #endif
        #if ENABLED(PSU_AUTO_POWER_CHAMBER_FAN)
            #define AUTO_POWER_CHAMBER_FAN
        #endif
        #define AUTO_POWER_E_TEMP  PSU_AUTO_POWER_E_TEMP
        #define AUTO_POWER_CHAMBER_TEMP PSU_AUTO_POWER_CHAMBER_TEMP
        #define POWER_TIMEOUT PSU_POWER_TIMEOUT
    #endif
#endif

/***********************************************************************/
// ┌───────────────────┐
// │ @section extruder │
// ├───────────────────┤
// │                   │
// └───────────────────┘

#define EXTRUDERS EXTRUDER_NUMBERS

#define DEFAULT_NOMINAL_FILAMENT_DIA EXTRUDER_FILAMENT_DIAMETER

#if ENABLED(EXTRUDER_SINGLENOZZLE)
    #define SINGLENOZZLE
    #if ENABLED(EXTRUDER_SINGLENOZZLE_STANDBY_TEMP
        #define SINGLENOZZLE_STANDBY_TEMP
    #endif
    #if ENABLED(EXTRUDER_SINGLENOZZLE_STANDBY_FAN)
        #define SINGLENOZZLE_STANDBY_FAN
    #endif
#endif

#if ENABLED(EXTRUDER_SWITCHING)
    #define SWITCHING_EXTRUDER
    #define SWITCHING_EXTRUDER_SERVO_NR EXTRUDER_SWITCHING_SERVO_NR
    #define SWITCHING_EXTRUDER_SERVO_ANGLES EXTRUDER_SWITCHING_SERVO_ANGLES
    #if EXTRUDERS > 3
        #define SWITCHING_EXTRUDER_E23_SERVO_NR EXTRUDER_SWITCHING_E23_SERVO_NR
    #endif
#endif

#if ENABLED(EXTRUDER_SWITCHING_NOZZLE)
    #define SWITCHING_NOZZLE
    #define SWITCHING_NOZZLE_SERVO_NR EXTRUDER_SWITCHING_NOZZLE_SERVO_NR
    #ifdef EXTRUDER_SWITCHING_NOZZLE_E1_SERVO_NR
        #define SWITCHING_NOZZLE_E1_SERVO_NR EXTRUDER_SWITCHING_NOZZLE_E1_SERVO_NR
    #endif
#endif

#if ENABLED(EXTRUDER_PARKING)
    #define PARKING_EXTRUDER
    #if ENABLED(EXTRUDER_PARKING_SOLENOIDS_INVERT)
        #define PARKING_EXTRUDER_SOLENOIDS_INVERT
    #endif
    #define PARKING_EXTRUDER_SOLENOIDS_PINS_ACTIVE EXTRUDER_PARKING_SOLENOIDS_PINS_ACTIVE
    #define PARKING_EXTRUDER_SOLENOIDS_DELAY EXTRUDER_PARKING_SOLENOIDS_DELAY
#endif

#if ENABLED(EXTRUDER_PARKING_MAGNETIC)
    #define MAGNETIC_PARKING_EXTRUDER
    #define MPE_FAST_SPEED EXTRUDER_PARKING_MAGNETIC_FAST_SPEED
    #define MPE_SLOW_SPEED EXTRUDER_PARKING_MAGNETIC_SLOW_SPEED
    #define MPE_TRAVEL_DISTANCE EXTRUDER_PARKING_MAGNETIC_TRAVEL_DISTANCE
    #define MPE_COMPENSATION EXTRUDER_PARKING_MAGNETIC_COMPENSATION
#endif

#if EITHER(PARKING_EXTRUDER,MAGNETIC_PARKING_EXTRUDER)
    #define PARKING_EXTRUDER_PARKING_X EXTRUDER_PARKING_X
    #define PARKING_EXTRUDER_GRAB_POSITION EXTRUDER_PARKING_GRAB_POSITION
    #if ENABLED(EXTRUDER_PARKING_MANUAL_SOLENOID_CONTROL)
        #define MANUAL_SOLENOID_CONTROL
    #endif
#endif

#if ENABLED(EXTRUDER_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD
    #define SWITCHING_NOZZLE_SERVO_NR EXTRUDER_SWITCHING_TOOLHEAD_SERVO_NR
    #define SWITCHING_TOOLHEAD_SERVO_ANGLES EXTRUDER_SWITCHING_TOOLHEAD_SERVO_ANGLES
#endif

#if ENABLED(EXTRUDER_SWITCHING_TOOLHEAD_MAGNETIC)
    #define MAGNETIC_SWITCHING_TOOLHEAD
    #define SWITCHING_TOOLHEAD_Y_RELEASE EXTRUDER_SWITCHING_TOOLHEAD_Y_RELEASE
    #define SWITCHING_TOOLHEAD_X_SECURITY EXTRUDER_SWITCHING_TOOLHEAD_X_SECURITY
    #if ENABLED(EXTRUDER_SWITCHING_TOOLHEAD_PRIME_BEFORE_REMOVE)
        #define PRIME_BEFORE_REMOVE
        #define SWITCHING_TOOLHEAD_PRIME_MM EXTRUDER_SWITCHING_TOOLHEAD_PRIME_MM
        #define SWITCHING_TOOLHEAD_RETRACT_MM EXTRUDER_SWITCHING_TOOLHEAD_RETRACT_MM
        #define SWITCHING_TOOLHEAD_PRIME_FEEDRATE EXTRUDER_SWITCHING_TOOLHEAD_PRIME_FEEDRATE
        #define SWITCHING_TOOLHEAD_RETRACT_FEEDRATE EXTRUDER_SWITCHING_TOOLHEAD_RETRACT_FEEDRATE
    #endif
#endif

#if ENABLED(EXTRUDER_SWITCHING_TOOLHEAD_ELECTROMAGNETIC)
    #define ELECTROMAGNETIC_SWITCHING_TOOLHEAD
    #define SWITCHING_TOOLHEAD_Z_HOP EXTRUDER_SWITCHING_TOOLHEAD_Z_HOP
#endif

#if ANY(SWITCHING_TOOLHEAD,MAGNETIC_SWITCHING_TOOLHEAD,ELECTROMAGNETIC_SWITCHING_TOOLHEAD)
    #define SWITCHING_TOOLHEAD_Y_POS EXTRUDER_SWITCHING_TOOLHEAD_Y_POS
    #define SWITCHING_TOOLHEAD_Y_SECURITY EXTRUDER_SWITCHING_TOOLHEAD_Y_SECURITY
    #define SWITCHING_TOOLHEAD_Y_CLEAR EXTRUDER_SWITCHING_TOOLHEAD_Y_CLEAR
    #define SWITCHING_TOOLHEAD_X_POS EXTRUDER_SWITCHING_TOOLHEAD_X_POS
#endif

#if ENABLED(EXTRUDER_MIXING)
    #define MIXING_EXTRUDER
    #define MIXING_STEPPERS EXTRUDER_MIXING_STEPPERS
    #define MIXING_VIRTUAL_TOOLS EXTRUDER_MIXING_VIRTUAL_TOOLS
    #if ENABLED(EXTRUDER_MIXING_DIRECT_IN_G1)
        #define DIRECT_MIXING_IN_G1
    #endif
    #if ENABLED(EXTRUDER_MIXING_GRADIENT)
        #define GRADIENT_MIX
        #if ENABLED(EXTRUDER_MIXING_GRADIENT_VTOOL)
            #define GRADIENT_VTOOL
        #endif
    #endif
#endif

#ifdef EXTRUDER_HOTEND_OFFSET_X
    #define HOTEND_OFFSET_X EXTRUDER_HOTEND_OFFSET_X
#endif

#ifdef EXTRUDER_HOTEND_OFFSET_Y
    #define HOTEND_OFFSET_Y EXTRUDER_HOTEND_OFFSET_Y
#endif

#ifdef EXTRUDER_HOTEND_OFFSET_Z
    #define HOTEND_OFFSET_Z EXTRUDER_HOTEND_OFFSET_Z
#endif

/***********************************************************************/
// ┌──────────────────────┐
// │ @section temperature │
// ├──────────────────────┤
// │                      │
// └──────────────────────┘