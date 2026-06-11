#include <stdio.h>

#include "block.h"
#include "resources.h"

Block create_block(const BLOCKTYPES block_type){
    return (Block){(Resource){EMPTY,0},block_type};
}


void set_block_type(Block* block, const BLOCKTYPES block_type){
    if (block == NULL) return;
    block->type=block_type;
}