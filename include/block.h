#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>

#include "resources.h"

typedef enum : uint8_t {
    EMPTY_BLOCK,
    SAND_BLOCK,
    GRASS_BLOCK,
    MOUNTAIN_BLOCK,
    FOREST_BLOCK,
} BLOCKTYPES;

typedef struct {
    Resource resourses;
    BLOCKTYPES type;
} Block;

Block create_block(const BLOCKTYPES block_type);

void set_block_type(Block* block, const BLOCKTYPES block_type);
BLOCKTYPES get_block_type(const Block block);

Resource get_resource(Block block);

#endif