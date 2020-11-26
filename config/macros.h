#pragma once

#define MOTION(A)               MOTION_##A
#define PRINTER(A)              PRINTER_##A
#define PRINTER_HAS(A,B)        B == PRINTER_##A

#define LOAD_CONFIGURATION(C)  C
