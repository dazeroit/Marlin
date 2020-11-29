#pragma once

#define nozzle_park "nozzle_park"

#define NOZZLE_PARK_FEATURE

#ifndef NOZZLE_PARK_POINT
    #define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 }
#endif

#ifndef NOZZLE_PARK_X_ONLY 
    #define NOZZLE_PARK_X_ONLY false
#endif

#ifndef NOZZLE_PARK_Y_ONLY 
    #define NOZZLE_PARK_Y_ONLY false
#endif

#ifndef NOZZLE_PARK_Z_RAISE_MIN
    #define NOZZLE_PARK_Z_RAISE_MIN 2
#endif

#ifndef NOZZLE_PARK_XY_FEEDRATE
    #define NOZZLE_PARK_XY_FEEDRATE 100
#endif

#ifndef NOZZLE_PARK_Z_FEEDRATE 
    #define NOZZLE_PARK_Z_FEEDRATE 5
#endif

