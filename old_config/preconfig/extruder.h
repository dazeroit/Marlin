#pragma once
#include "../extruders.h"

#if IS_EXTRUDER(BOWDEN_EXTRUDER)
    #include "../extruders/bowden.h"
#elif IS_EXTRUDER(DIRECT_EXTRUDER)
    #include "../extruders/direct.h"
#elif IS_EXTRUDER(TITAN_EXTRUDER)
    #include "../extruders/titan_direct.h"
#elif IS_EXTRUDER(TITAN_BOWDEN_EXTRUDER)
    #include "../extruders/titan_bowden.h"
#endif