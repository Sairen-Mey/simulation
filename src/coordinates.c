#include "coordinates.h"

Coordinates set_coordinates(const short int x, const short int y){
    Coordinates coords = {0};
    coords.x = (x > 127) ? 127 : (x < -128) ? -128 : (int8_t)x;
    coords.y = (y > 127) ? 127 : (y < -128) ? -128 : (int8_t)y;
    return coords;
}