#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>

#include "resources.h"

enum BLOCKTYPES : uint8_t{
    SAND,
    WATER,
    GRASS,
    MOUNTAIN,
    FOREST,
};

typedef struct {
    uint8_t type;
    Resource resourses;
} Block;


#endif