#include "greatest.h"
#include "block.h"

TEST test_create_block(void){
    Block blck = create_block(GRASS_BLOCK);

    ASSERT_EQ(GRASS_BLOCK, blck.type);
    ASSERT_EQ(EMPTY_RES, blck.resourses.type);
    ASSERT_EQ(0, blck.resourses.count_resource);

    PASS();
}

TEST test_set_block_type(void){
    Block blck = create_block(GRASS_BLOCK);

    set_block_type(&blck, FOREST_BLOCK);

    ASSERT_EQ(FOREST_BLOCK, blck.type);
    ASSERT_EQ(EMPTY_RES, blck.resourses.type);
    ASSERT_EQ(0, blck.resourses.count_resource);

    PASS();
}

TEST test_set_block_type_with_NULL(void){
    set_block_type(NULL, GRASS_BLOCK);

    PASS();
}

TEST test_get_block_type(void){
    Block blck = create_block(GRASS_BLOCK);

    ASSERT_EQ(GRASS_BLOCK, get_block_type(blck));

    PASS();
}

TEST test_get_resource(void){
    Block blck = create_block(GRASS_BLOCK);

    ASSERT(blck.resourses.count_resource == get_resource(blck).count_resource);
    ASSERT(blck.resourses.type == get_resource(blck).type);

    PASS();
}








SUITE(block_suit){
    RUN_TEST(test_create_block);
    RUN_TEST(test_set_block_type);
    RUN_TEST(test_set_block_type_with_NULL);
    RUN_TEST(test_get_block_type);
    RUN_TEST(test_get_resource);
}