#ifndef COORDS_H
#define COORDS_H

#include <stdio.h>
#include <stdint.h>

typedef struct {
    int8_t x;
    int8_t y;
} Coordinates;

Coordinates set_coordinates(short int x, short int y);

#endif