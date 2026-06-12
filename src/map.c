#include <stdio.h>
#include "map.h"
#include "block.h"

Map create_map(){
    return (Map){0};
}


void generate_map(Map* map){
    if (map == NULL) return;

    for (short int x = 0; x < MAX_ROW; x++){
        for (short int y = 0; y < MAX_COL; y++){
            if (x < 20 && y < 20){
                map->blocks[x][y] = create_block(SAND);
            } else if (x < 20 && y >= 20){
                map->blocks[x][y] = create_block(GRASS);
            } else if (x >= 20 && y < 20){
                map->blocks[x][y] = create_block(MOUNTAIN);
            } else if (x >= 20 && y >= 20){
                map->blocks[x][y] = create_block(FOREST);
            }
        }
    }
}