#pragma once

//$PRINTER
#ifndef PRINTER_NAME
    #define PRINTER_NAME    "3D Printer"
#endif

#ifndef PRINTER_MOTION
    #define PRINTER_MOTION  cartesian
#endif

#ifndef PRINTER_MOTHERBOARD
    #define PRINTER_MOTHERBOARD BOARD_RAMPS_14_EFB
#endif

#ifndef PRINTER_SERIAL_PORT_ENABLE
    #define PRINTER_SERIAL_PORT_ENABLE true
#endif

#ifndef PRINTER_SERIAL_PORT_ID
    #define PRINTER_SERIAL_PORT_ID 0
#endif

#ifndef PRINTER_SERIAL_PORT_2_ENABLE
    #define PRINTER_SERIAL_PORT_2_ENABLE false
#endif

#ifndef PRINTER_SERIAL_PORT_2_ID
    #define PRINTER_SERIAL_PORT_2_ID -1
#endif

#ifndef PRINTER_BAUDRATE 
    #define PRINTER_BAUDRATE 250000
#endif

#ifndef PRINTER_BLUETOOTH_ENABLE
    #define  PRINTER_BLUETOOTH_ENABLE false
#endif

#ifndef PRINTER_MACHINE_UUID
    #define PRINTER_MACHINE_UUID "d6a08295-1a5e-40f0-bfb4-67c206d3f010"
#endif

#ifndef PRINTER_CUSTOM_BOOTSCREEN  
    #define PRINTER_CUSTOM_BOOTSCREEN false
#endif

#ifndef PRINTER_CUSTOM_STATUS_SCREEN
    #define PRINTER_CUSTOM_STATUS_SCREEN false
#endif

//$PSU
#ifndef PRINTER_PSU
    #define PRINTER_PSU false
#endif 

//$EXTRUDER
#ifndef PRINTER_EXTRUDER
    #define PRINTER_EXTRUDER generic
#endif

//$HOTEND
#ifndef PRINTER_HOTEND
    #define PRINTER_HOTEND generic
#endif

//$BED
#ifndef PRINTER_BED
    #define PRINTER_BED generic
#endif

//$CHAMBER
#ifndef PRINTER_CHAMBER
    #define PRINTER_CHAMBER none
#endif

//$PID_COMMON
#ifndef PRINTER_PID_DEBUG
    #define PRINTER_PID_DEBUG false
#endif

#ifndef PRINTER_PID_OPENLOOP
    #define PRINTER_PID_OPENLOOP false
#endif

#ifndef PRINTER_SLOW_PWM_HEATERS
    #define PRINTER_SLOW_PWM_HEATERS false
#endif

#ifndef PRINTER_PID_FUNCTIONAL_RANGE
    #define PRINTER_PID_FUNCTIONAL_RANGE 10
#endif

//$ENDSTOP_COMMON
#ifndef PRINTER_ENDSTOP_PULLUP
    #define PRINTER_ENDSTOP_PULLUP true
#endif

#ifndef PRINTER_ENDSTOP_PULLDOWN
    #define PRINTER_ENDSTOP_PULLDOWN false
#endif

#ifndef PRINTER_ENDSTOP_INTERRUPTS_FEATURE
    #define PRINTER_ENDSTOP_INTERRUPTS_FEATURE false
#endif
#ifndef PRINTER_ENDSTOP_NOISE_THRESOLD
    #define PRINTER_ENDSTOP_NOISE_THRESOLD 0
#endif

#ifndef PRINTER_DETECT_BROKEN_ENDSTOP
    #define PRINTER_DETECT_BROKEN_ENDSTOP false
#endif

#ifndef PRINTER_PROBE
    #define PRINTER_PROBE ../probe
#endif

#ifndef PRINTER_FILAMENT_RUNOUT
    #define PRINTER_FILAMENT_RUNOUT false
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_ENABLED_DEFAULT
    #define PRINTER_FILAMENT_RUNOUT_ENABLED_DEFAULT true
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_NUMBERS
    #define PRINTER_FILAMENT_RUNOUT_NUMBERS 1
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_STATE
    #define PRINTER_FILAMENT_RUNOUT_STATE LOW
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_PULLUP
    #define PRINTER_FILAMENT_RUNOUT_PULLUP true
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_PULLDOWN
    #define PRINTER_FILAMENT_RUNOUT_PULLDOWN false
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_SCRIPT
    #define PRINTER_FILAMENT_RUNOUT_SCRIPT "M600"
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_DISTANCE_MM
    #define PRINTER_FILAMENT_RUNOUT_DISTANCE_MM 0 //25
#endif

#ifndef PRINTER_FILAMENT_RUNOUT_MOTION_SENSOR
    #define PRINTER_FILAMENT_RUNOUT_MOTION_SENSOR false
#endif

#ifndef PRINTER_LEVELING
    #define PRINTER_LEVELING none
#endif

#ifndef PRINTER_PREHEAT_1_LABEL
    #define PRINTER_PREHEAT_1_LABEL "PLA"
#endif

#ifndef PRINTER_PREHEAT_1_TEMP_HOTEND
    #define PRINTER_PREHEAT_1_TEMP_HOTEND 205
#endif

#ifndef PRINTER_PREHEAT_1_TEMP_BED
    #define PRINTER_PREHEAT_1_TEMP_BED 60
#endif

#ifndef PRINTER_PREHEAT_1_FAN_SPEED
    #define PRINTER_PREHEAT_1_FAN_SPEED 0
#endif

#ifndef PRINTER_PREHEAT_2_LABEL 
    #define PRINTER_PREHEAT_2_LABEL "ABS"
#endif

#ifndef PRINTER_PREHEAT_2_TEMP_HOTEND
    #define PRINTER_PREHEAT_2_TEMP_HOTEND 240
#endif

#ifndef PRINTER_PREHEAT_2_TEMP_BED
    #define PRINTER_PREHEAT_2_TEMP_BED 110
#endif

#ifndef PRINTER_PREHEAT_2_FAN_SPEED
    #define PRINTER_PREHEAT_2_FAN_SPEED 0
#endif

#ifndef PRINTER_EEPROM 
    #define PRINTER_EEPROM false
#endif

#ifndef PRINTER_EEPROM_DISABLE_M503
    #define PRINTER_EEPROM_DISABLE_M503 false
#endif

#ifndef PRINTER_EEPROM_CHITCHAT
    #define PRINTER_EEPROM_CHITCHAT true
#endif

#ifndef PRINTER_EEPROM_BOOT_SILENT
    #define PRINTER_EEPROM_BOOT_SILENT true
#endif

#ifndef PRINTER_EEPROM_AUTO_INIT
    #define PRINTER_EEPROM_AUTO_INIT false
#endif

#ifndef PRINTER_HOST_KEEPALIVE_FEATURE
    #define PRINTER_HOST_KEEPALIVE_FEATURE true
#endif

#ifndef PRINTER_DEFAULT_KEEPALIVE_INTERVAL 
    #define PRINTER_DEFAULT_KEEPALIVE_INTERVAL 2
#endif

#ifndef PRINTER_BUSY_WHILE_HEATING
    #define PRINTER_BUSY_WHILE_HEATING true
#endif

#ifndef PRINTER_INCH_MODE_SUPPORT
    #define PRINTER_INCH_MODE_SUPPORT false
#endif

#ifndef PRINTER_TEMPERATURE_UNITS_SUPPORT
    #define PRINTER_TEMPERATURE_UNITS_SUPPORT false
#endif

#ifndef PRINTER_JOB_TIMER_AUTOSTART
    #define PRINTER_JOB_TIMER_AUTOSTART true
#endif

#ifndef PRINTER_COUNTER
    #define PRINTER_COUNTER false
#endif

#ifndef PRINTER_LCD_LANGUAGE
    #define PRINTER_LCD_LANGUAGE en
#endif

#ifndef PRINTER_DISPLAY_CHARSET_HD44780 
    #define PRINTER_DISPLAY_CHARSET_HD44780 WESTERN
#endif

#ifndef PRINTER_LCD_INFO_SCREEN_STYLE
    #define PRINTER_LCD_INFO_SCREEN_STYLE 0
#endif

#ifndef PRINTER_SD
    #define PRINTER_SD false
#endif

#ifndef PRINTER_SPI_SPEED
    #define PRINTER_SPI_SPEED SPI_FULL_SPEED 
#endif

#ifndef PRINTER_SD_CHECK_AND_RETRY
    #define PRINTER_SD_CHECK_AND_RETRY false
#endif

#ifndef PRINTER_NO_LCD_MENUS
    #define PRINTER_NO_LCD_MENUS false
#endif

#ifndef PRINTER_SLIM_LCD_MENUS
    #define PRINTER_SLIM_LCD_MENUS false
#endif


#ifndef PRINTER_ENCODER_PULSES_PER_STEP
    #define PRINTER_ENCODER_PULSES_PER_STEP 0 //4
#endif

#ifndef PRINTER_ENCODER_STEPS_PER_MENU_ITEM
    #define PRINTER_ENCODER_STEPS_PER_MENU_ITEM 0//1
#endif
#ifndef PRINTER_REVERSE_ENCODER_DIRECTION
    #define PRINTER_REVERSE_ENCODER_DIRECTION false
#endif
#ifndef PRINTER_REVERSE_MENU_DIRECTION false
    #define PRINTER_REVERSE_MENU_DIRECTION false
#endif
#ifndef PRINTER_REVERSE_SELECT_DIRECTION
    #define PRINTER_REVERSE_SELECT_DIRECTION false
#endif
#ifndef PRINTER_INDIVIDUAL_AXIS_HOMING_MENU
    #define PRINTER_INDIVIDUAL_AXIS_HOMING_MENU false
#endif
#ifndef PRINTER_SPEAKER
    #define PRINTER_SPEAKER false
#endif
#ifndef PRINTER_LCD_FEEDBACK_FREQUENCY_DURATION_MS
    #define PRINTER_LCD_FEEDBACK_FREQUENCY_DURATION_MS 0//2
#endif
#ifndef PRINTER_LCD_FEEDBACK_FREQUENCY_HZ
    #define PRINTER_LCD_FEEDBACK_FREQUENCY_HZ 0//5000
#endif

#ifndef PRINTER_DISPLAY
    #define PRINTER_DISPLAY 
#endif

/***********************************************************************/
#ifdef PRINTER_MOTION
    #include LOAD_CONFIG(../motions/PRINTER_MOTION)
#endif

#ifdef PRINTER_EXTRUDER
    #include LOAD_CONFIG(../extruders/PRINTER_EXTRUDER)
#endif

#ifdef PRINTER_HOTEND
    #include LOAD_CONFIG(../hotends/PRINTER_HOTEND)
#endif

#ifdef PRINTER_CHAMBER
    #include LOAD_CONFIG(../chambers/PRINTER_CHAMBER)
#endif

#ifdef PRINTER_BED
    #include LOAD_CONFIG(../beds/PRINTER_BED)
#endif

#if __has_include(STRINGIFY(../probes/PRINTER_PROBE.h))
    #include LOAD_CONFIG(../probes/PRINTER_PROBE)
#endif

#if __has_include(STRINGIFY(../leveling/PRINTER_LEVELING.h))
    #include LOAD_CONFIG(../leveling/PRINTER_LEVELING)
#endif

#if __has_include(STRINGIFY(../psu/PRINTER_PSU.h))
    #include LOAD_CONFIG(../psu/PRINTER_PSU)
#endif

#ifdef PRINTER_FEATURE_1
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_1.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_1)
    #else
        #error "PRINTER_FEATURE_1 does not exists !"
    #endif
#endif

#ifdef PRINTER_FEATURE_2
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_2.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_2)
    #else
        #error "PRINTER_FEATURE_2 does not exists !"
    #endif
#endif

#ifdef PRINTER_FEATURE_3
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_3.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_3)
    #else
        #error "PRINTER_FEATURE_3 does not exists !"
    #endif
#endif

#ifdef PRINTER_FEATURE_4
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_4.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_4)
    #else
        #error "PRINTER_FEATURE_4 does not exists !"
    #endif
#endif

#ifdef PRINTER_FEATURE_5
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_5.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_5)
    #else
        #error "PRINTER_FEATURE_5 does not exists !"
    #endif
#endif

#ifdef PRINTER_FEATURE_6
    #if __has_include(STRINGIFY(../features/PRINTER_FEATURE_6.h))
        #include LOAD_CONFIG(../features/PRINTER_FEATURE_6)
    #else
        #error "PRINTER_FEATURE_6 does not exists !"
    #endif
#endif











/***********************************************************************/