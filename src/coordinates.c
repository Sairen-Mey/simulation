#include "coordinates.h"

Coordinates create_coordinates(const short int x, const short int y){
    Coordinates coords = {
        .x = (x > 127) ? 127 : (x < -128) ? -128 : x,
        .y = (y > 127) ? 127 : (y < -128) ? -128 : y
    };
    
    return coords;
}

void set_coordinates(Coordinates* coords, const short int x, const short int y){
    if (coords == NULL) return;
    set_coordinate_x(coords, x);
    set_coordinate_y(coords, y);
}



void set_coordinate_x(Coordinates* coords, const short int x){
    if (coords == NULL) return;
    coords->x = (x > 127) ? 127 : (x < -128) ? -128 : x;
}


void set_coordinate_y(Coordinates* coords, const short int y){
    if (coords == NULL) return;
    coords->y = (y > 127) ? 127 : (y < -128) ? -128 : y;
}


Coordinates get_coordinates(const Coordinates coords){
    return coords;
}


uint8_t get_coordinate_x(const Coordinates coords){
    return coords.x;
}


uint8_t get_coordinate_y(const Coordinates coords){
    return coords.y;
}