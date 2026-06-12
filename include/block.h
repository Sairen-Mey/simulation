#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>

#include "resources.h"

typedef enum {
    SAND,
    GRASS,
    MOUNTAIN,
    FOREST,
} BLOCKTYPES;

typedef struct {
    Resource resourses;
    uint8_t type;
} Block;

Block create_block(BLOCKTYPES block_type);
void set_block_type(Block* block, BLOCKTYPES block_type);

#endif