#include "greatest.h"
#include "map.h"
#include "resources.h"



TEST test_create_map(void){
    Map map = create_map();

    for (int x = 0; x < MAX_ROW; x++) {
        for (int y = 0; y < MAX_COL; y++) {
            if (map.blocks[x][y].type != EMPTY || map.blocks[x][y].resourses.count_resource != 0) {
                FAILm("Map has not initialised data!"); 
            }
        }
    }

    PASS();
}


TEST test_generate_map(void){
    Map map = create_map();
    
    for (short int x = 0; x < MAX_ROW; x++) {
        for (short int y = 0; y < MAX_COL; y++) {
            ASSERT_EQ(EMPTY, map.blocks[x][y].type);
        }
    }

    generate_map(&map);

    for (short int x = 0; x < MAX_ROW; x++) {
        for (short int y = 0; y < MAX_COL; y++) {
            
            if (x < 20 && y < 20) {
                ASSERT_EQ(SAND, map.blocks[x][y].type);
            } 
            else if (x < 20 && y >= 20) {
                ASSERT_EQ(GRASS, map.blocks[x][y].type);
            } 
            else if (x >= 20 && y < 20) {
                ASSERT_EQ(MOUNTAIN, map.blocks[x][y].type);
            } 
            else if (x >= 20 && y >= 20) {
                ASSERT_EQ(FOREST, map.blocks[x][y].type);
            }
            
        }
    }

    PASS();
}



TEST test_generate_map_with_NULL(void){  
    generate_map(NULL);

    PASS();
}


SUITE(map_suit){
    RUN_TEST(test_create_map);
    RUN_TEST(test_generate_map);
    RUN_TEST(test_generate_map_with_NULL);
}