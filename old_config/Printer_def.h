#pragma once

typedef struct {
    uint8_t max_size_x;
    uint8_t max_size_y;
    bool origin_on_center;
    bool is_heated;
    uint8_t max_temp;
}Bed;

typedef struct {

}Motherboard;

typedef struct {

}Extruder;

typedef struct {

}Hotend;

typedef struct {

}Motor;

typedef struct {
    char name[];
    uint8_t kinematic;
    Motherboard board;
    Bed bed;
    Extruder extruder;
    Hotend hotend;
    Motor motors[];
}Printer;

extern Printer printer;


