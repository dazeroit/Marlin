#pragma once

//$PRINTER
#ifndef PRINTER_NAME
    #define PRINTER_NAME    "3D Printer"
#endif

#ifndef PRINTER_MOTION
    #define PRINTER_MOTION  MOTION_CARTESIAN
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


/***********************************************************************/
#ifdef PRINTER_EXTRUDER
    #include LOAD_CONFIG(../extruders/PRINTER_EXTRUDER)
#endif

#ifdef PRINTER_HOTEND
    #include LOAD_CONFIG(../hotends/PRINTER_HOTEND)
#endif

#if __has_include(STRINGIFY(../psu/PRINTER_PSU.h))
    #include LOAD_CONFIG(../psu/PRINTER_PSU)
#endif
/***********************************************************************/