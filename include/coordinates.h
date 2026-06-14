#ifndef COORDS_H
#define COORDS_H

#include <stdio.h>
#include <stdint.h>

typedef struct {
    int8_t x;
    int8_t y;
} Coordinates;

Coordinates create_coordinates(const short int x, const short int y);
void set_coordinates(Coordinates* coords, const short int x, const short int y);
void set_coordinate_x(Coordinates* coords, const short int x);
void set_coordinate_y(Coordinates* coords, const short int y);

Coordinates get_coordinates(const Coordinates coords);
uint8_t get_coordinate_x(const Coordinates coords);
uint8_t get_coordinate_y(const Coordinates coords);

#endif