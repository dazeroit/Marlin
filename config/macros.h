#pragma once

#define MOTION(A)               MOTION_##A
#define IS_PRINTER_MOTION(M)    M==PRINTER_MOTION
#define PRINTER(A)              PRINTER_##A
#define PRINTER_HAS(A,B)        B == PRINTER_##A

#define _LOAD_CONFIG(C)          STRINGIFY(C)

#define LOAD_CONFIG(C)          _LOAD_CONFIG(C.h)
#define LOAD_EXTRUDER(E)        _LOAD_CONFIG(../config/extruders/E.h)
#define LOAD_PRINTER(P)         _LOAD_CONFIG(../config/printers/P.h)


/*#define STEPS_MM(A)           AXIS_##A##_STEPS_MM
#define STEPS_MM_1(A,...)         AXIS_##A##0_STEPS_MM
#define STEPS_MM_2(A,...)         STEPS_MM_1(A) , AXIS_##A##1_STEPS_MM
#define STEPS_MM_3(A,...)         STEPS_MM_2(A) , AXIS_##A##2_STEPS_MM
#define STEPS_MM_4(A,...)         STEPS_MM_3(A) , AXIS_##A##3_STEPS_MM
#define STEPS_MM_5(A,...)         STEPS_MM_4(A) , AXIS_##A##4_STEPS_MM
#define STEPS_MM_6(A,...)         STEPS_MM_5(A) , AXIS_##A##5_STEPS_MM
#define STEPS_MM_7(A,...)         STEPS_MM_6(A) , AXIS_##A##6_STEPS_MM
#define STEPS_MM_8(A,...)         STEPS_MM_7(A) , AXIS_##A##7_STEPS_MM

#define _STEPS_MM_LIST(N,A...)  STEPS_MM_##N(A)
#define STEPS_MM_LIST(N,A...)   _STEPS_MM_LIST(N,A)*/

#define AXIS_VALUE_1(A,V,...)       AXIS_##A##0_##V
#define AXIS_VALUE_2(A,V,...)       AXIS_VALUE_1(A,V) , AXIS_##A##1_##V
#define AXIS_VALUE_3(A,V,...)       AXIS_VALUE_2(A,V) , AXIS_##A##2_##V
#define AXIS_VALUE_4(A,V,...)       AXIS_VALUE_3(A,V) , AXIS_##A##3_##V
#define AXIS_VALUE_5(A,V,...)       AXIS_VALUE_4(A,V) , AXIS_##A##4_##V
#define AXIS_VALUE_6(A,V,...)       AXIS_VALUE_5(A,V) , AXIS_##A##5_##V
#define AXIS_VALUE_7(A,V,...)       AXIS_VALUE_6(A,V) , AXIS_##A##6_##V
#define AXIS_VALUE_8(A,V,...)       AXIS_VALUE_7(A,V) , AXIS_##A##7_##V

#define _AXIS_VALUE_LIST(N,A,V...) AXIS_VALUE_##N(A,V)
#define AXIS_VALUE_LIST(N,A,V...) _AXIS_VALUE_LIST(N,A,V)

