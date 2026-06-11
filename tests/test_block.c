#include "greatest.h"
#include "block.h"

TEST test_create_block(void){
    Block blck = create_block(GRASS);

    ASSERT_EQ(GRASS, blck.type);
    ASSERT_EQ(EMPTY, blck.resourses.type);
    ASSERT_EQ(0, blck.resourses.count_resource);

    PASS();
}

TEST test_set_block_type(void){
    Block blck = create_block(GRASS);

    set_block_type(&blck, FOREST);

    ASSERT_EQ(FOREST, blck.type);
    ASSERT_EQ(EMPTY, blck.resourses.type);
    ASSERT_EQ(0, blck.resourses.count_resource);

    PASS();
}

TEST test_set_block_type_with_NULL(void){
    set_block_type(NULL, GRASS);

    PASS();
}


SUITE(block_suit){
    RUN_TEST(test_create_block);
    RUN_TEST(test_set_block_type);
    RUN_TEST(test_set_block_type_with_NULL);
}