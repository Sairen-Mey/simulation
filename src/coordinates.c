#include "coordinates.h"

Coordinates set_coordinates(const short int x, const short int y){
    Coordinates coords = {
        .x = (x > 127) ? 127 : (x < -128) ? -128 : x,
        .y = (y > 127) ? 127 : (y < -128) ? -128 : y
    };
    
    return coords;
}