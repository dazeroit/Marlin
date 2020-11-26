#pragma once

#define MOTION(A)               MOTION_##A
#define PRINTER(A)              PRINTER_##A
#define PRINTER_HAS(A,B)        B == PRINTER_##A

#define _LOAD_CONFIG(C)          STRINGIFY(C)

#define LOAD_CONFIG(C)          _LOAD_CONFIG(C.h)
#define LOAD_EXTRUDER(E)        _LOAD_CONFIG(../config/extruders/E.h)
#define LOAD_PRINTER(P)         _LOAD_CONFIG(../config/printers/P.h)
