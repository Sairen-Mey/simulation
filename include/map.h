#ifndef MAP_H
#define MAP_H

#include "block.h"
#include "resources.h"

#define MAX_ROW 40
#define MAX_COL 40


typedef struct {
    Block blocks[MAX_ROW][MAX_COL];
} Map;


Map create_map(void);
void generate_map(Map* map);

Block* get_block(Map* map, const uint8_t x, const uint8_t y);

#endif