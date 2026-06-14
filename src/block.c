#include <stdio.h>

#include "block.h"
#include "resources.h"

Block create_block(const BLOCKTYPES block_type){
    return (Block){(Resource){EMPTY_RES,0},block_type};
}


void set_block_type(Block* block, const BLOCKTYPES block_type){
    if (block == NULL) return;
    block->type=block_type;
}


BLOCKTYPES get_block_type(const Block block){
    return block.type;
}

Resource get_resource(Block block){
    return block.resourses;
}