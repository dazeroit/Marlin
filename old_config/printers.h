#pragma once

#define ENDER_3                         1000
#define ENDER_3_PRO                     1001
#define ENDER_3_V2                      1002
#define ENDER_3_BOARD_V422              1003
#define ENDER_3_BOARD_V427              1004
#define ENDER_3_BTT_SKR_V1_3            1010
#define ENDER_3_BTT_SKR_V1_4            1011
#define ENDER_3_BTT_SKR_V1_4T           1020
#define ENDER_3_BTT_SKR_MINI_E3_V1      1030
#define ENDER_3_BTT_SKR_MINI_E3_V1_2    1031
#define ENDER_3_BTT_SKR_MINI_E3_V2      1032
#define ENDER_3_MKS_ROBIN_E3            1040
#define ENDER_3_MKS_ROBIN_E3D           1041



//MACROS DEFINITIONS
#define IS_PRINTER(P)           P==PRINTER_NAME
#define IS_PRINTER_1(A)         IS_PRINTER(A)
#define IS_PRINTER_2(A,B)       IS_PRINTER(A) ||  IS_PRINTER(B)
#define IS_PRINTER_3(A,B,C)     IS_PRINTER(A) ||  IS_PRINTER(B) || IS_PRINTER(C)
#define _IS_PRINTER_ANY(N,P...) IS_PRINTER_##N(P)
#define __IS_PRINTER_ANY(N,P...) _IS_PRINTER_ANY(N,P)
#define IS_PRINTER_ANY(P...)    __IS_PRINTER_ANY(NUM_ARGS(P),P)