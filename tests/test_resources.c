#include "greatest.h"
#include "resources.h"

TEST test_create_resource(void){
    Resource res = create_resource(EMPTY_RES);

    ASSERT(res.type == EMPTY_RES);
    ASSERT_EQ(0, res.count_resource);
    
    PASS();
}

TEST test_set_resource_type(void){
    Resource res = create_resource(EMPTY_RES);
    
    set_resource_type(&res, TREE_RES);

    ASSERT(res.type == TREE_RES);

    PASS();
}

TEST test_set_resource_type_with_NULL(void){ 
    set_resource_type(NULL, TREE_RES);

    PASS();
}

TEST test_set_default_resource(void){
    Resource res = create_resource(EMPTY_RES);
    
    set_resource_type(&res, TREE_RES);
    set_count_resource(&res, 50);

    set_default_resource(&res);

    ASSERT(res.type == EMPTY_RES);
    ASSERT_EQ(0, res.count_resource);

    PASS();
}

TEST test_set_default_resource_with_NULL(void){
    set_default_resource(NULL);

    PASS();
}

TEST test_set_count_resource(void){
    Resource res = create_resource(EMPTY_RES);

    set_count_resource(&res, 1);

    ASSERT_EQ(1, res.count_resource);

    PASS();
}


TEST test_set_count_resource_with_NULL(void){
    set_count_resource(NULL, 0);

    PASS();
}


TEST test_get_resource_type(void){
    Resource res = create_resource(EMPTY_RES);

    ASSERT_EQ(res.type, get_resource_type(res));

    PASS();
}


TEST test_get_count_resource(void){
        Resource res = create_resource(EMPTY_RES);

    ASSERT_EQ(res.count_resource, get_count_resource(res));

    PASS();
}


SUITE(resources_suit){
    RUN_TEST(test_create_resource);
    RUN_TEST(test_set_resource_type);
    RUN_TEST(test_set_resource_type_with_NULL);
    RUN_TEST(test_set_default_resource);
    RUN_TEST(test_set_default_resource_with_NULL);
    RUN_TEST(test_set_count_resource);
    RUN_TEST(test_set_count_resource_with_NULL);
    RUN_TEST(test_get_resource_type);
    RUN_TEST(test_get_count_resource);
}