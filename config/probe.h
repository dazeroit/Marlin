#pragma once

#ifndef PROBE_USES_Z_ENDSTOP_MIN_PIN
    #define PROBE_USES_Z_ENDSTOP_MIN_PIN true
#endif

#ifndef PROBE_USES_FOR_Z_HOMING
    #define PROBE_USES_FOR_Z_HOMING false
#endif

#ifndef PROBE_PIN
    #define PROBE_PIN 0 //32
#endif

#ifndef PROBE_X_OFFSET
    #define PROBE_X_OFFSET 10.0
#endif

#ifndef PROBE_Y_OFFSET
    #define PROBE_Y_OFFSET 10.0
#endif

#ifndef PROBE_Z_OFFSET 
    #define PROBE_Z_OFFSET 0.0
#endif

#ifndef PROBE_MARGIN
    #define PROBE_MARGIN 10.0
#endif

#ifndef PROBE_SPEED
    #define PROBE_SPEED ( AXIS_X_MAX_FEEDRATE / 2 * 60 )
#endif

#ifndef PROBE_Z_SPEED_FAST
    #define PROBE_Z_SPEED_FAST MOTION_HOMING_FEEDRATE_Z 
#endif

#ifndef PROBE_Z_SPEED_SLOW
    #define PROBE_Z_SPEED_SLOW ( PROBE_Z_SPEED_FAST / 2 )
#endif

#ifndef PROBE_MULTIPLE_PROBING
    #define PROBE_MULTIPLE_PROBING 0 //2
#endif

#ifndef PROBE_EXTRA_PROBING
    #define PROBE_EXTRA_PROBING 0 //1
#endif

#ifndef PROBE_Z_CLEARANCE_DEPLOY
    #define PROBE_Z_CLEARANCE_DEPLOY 10
#endif

#ifndef PROBE_Z_CLEARANCE_BETWEEN_PROBES
    #define PROBE_Z_CLEARANCE_BETWEEN_PROBES 5
#endif

#ifndef PROBE_Z_CLEARANCE_MULTI_PROBE
    #define PROBE_Z_CLEARANCE_MULTI_PROBE 5
#endif

#ifndef PROBE_Z_AFTER_PROBING
    #define PROBE_Z_AFTER_PROBING 0 //5
#endif

#ifndef PROBE_Z_LOW_POINT 
    #define PROBE_Z_LOW_POINT -2
#endif

#ifndef PROBE_Z_OFFSET_RANGE_MIN
    #define PROBE_Z_OFFSET_RANGE_MIN -20
#endif

#ifndef PROBE_Z_OFFSET_RANGE_MAX
    #define PROBE_Z_OFFSET_RANGE_MAX 20
#endif

#ifndef PROBE_REPEATABILITY_TEST
    #define PROBE_REPEATABILITY_TEST false
#endif

#ifndef PROBE_PAUSE_BEFORE_DEPLOY_STOW
    #define PROBE_PAUSE_BEFORE_DEPLOY_STOW false
#endif

#ifndef PROBE_PAUSE_DEPLOY_WHEN_TRIGGERED
    #define PROBE_PAUSE_DEPLOY_WHEN_TRIGGERED false
#endif

#ifndef PROBE_HEATERS_OFF
    #define PROBE_HEATERS_OFF false
#endif

#ifndef PROBE_WAIT_FOR_BED_HEATER
    #define PROBE_WAIT_FOR_BED_HEATER false
#endif

#ifndef PROBE_FANS_OFF
    #define PROBE_FANS_OFF false
#endif

#ifndef PROBE_STEPPERS_OFF
    #define PROBE_STEPPERS_OFF false
#endif

#ifndef PROBE_DELAY_BEFORE_PROBING
    #define PROBE_DELAY_BEFORE_PROBING 0 //200
#endif
