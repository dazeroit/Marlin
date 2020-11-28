#pragma once
/*▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼*/

#define PRINTER_EXTENDS generic
#define PRINTER_MOTHERBOARD BOARD_MELZI_CREALITY
#define BED_X_SIZE 235
#define BED_Y_SIZE 235
#define AXIS_Z_MAX_POS 250






/*▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲*/
#ifdef PRINTER_EXTENDS
    #if __has_include(STRINGIFY(PRINTER_EXTENDS.h))
        #include LOAD_CONFIG(PRINTER_EXTENDS)
    #endif
#endif
/***********************************************************************/