#include "greatest.h"
#include "resources.h"

TEST test_create_resource(void){
    Resource res = create_resource(EMPTY);

    ASSERT(res.type == EMPTY);
    ASSERT_EQ(0, res.count_resource);
    
    PASS();
}

TEST test_change_resource_type(void){
    Resource res = {0};
    
    change_resource_type(&res, TREE);

    ASSERT(res.type == TREE);

    PASS();
}

TEST test_change_resource_type_with_NULL(void){
    change_resource_type(NULL, TREE);

    PASS();
}

TEST test_delete_resource(void){
    Resource res = {0};
    
    change_resource_type(&res, TREE);
    set_count_resource(&res, 50);

    delete_resource(&res);

    ASSERT(res.type == EMPTY);
    ASSERT_EQ(0, res.count_resource);

    PASS();
}

TEST test_delete_resource_with_NULL(void){
    delete_resource(NULL);

    PASS();
}

TEST test_set_count_resource(void){
    Resource res = {0};

    set_count_resource(&res, 1);

    ASSERT_EQ(1, res.count_resource);

    PASS();
}


TEST test_set_count_resource_with_NULL(void){
    set_count_resource(NULL, 0);

    PASS();
}


SUITE(resources_suit){
    RUN_TEST(test_create_resource);
    RUN_TEST(test_change_resource_type);
    RUN_TEST(test_change_resource_type_with_NULL);
    RUN_TEST(test_delete_resource);
    RUN_TEST(test_delete_resource_with_NULL);
    RUN_TEST(test_set_count_resource);
    RUN_TEST(test_set_count_resource_with_NULL);
}