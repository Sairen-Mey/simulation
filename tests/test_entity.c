#include "greatest.h"
#include "entity.h"



TEST test_create_entity(void){
    Entity ent = create_entity(10,20, UNIT_TYPE);

    ASSERT_EQ(UNIT_TYPE, ent.type);
    ASSERT_EQ(10, ent.cords.x);
    ASSERT_EQ(20, ent.cords.y);

    PASS();
}
TEST test_set_entity_type(void){
    Entity ent = create_entity(10,20, UNIT_TYPE);

    set_entity_type(&ent, SUPER_UNIT_TYPE);

    ASSERT_EQ(SUPER_UNIT_TYPE, ent.type);

    PASS();
}
TEST test_set_entity_type_with_NULL(void){
    set_entity_type(NULL, UNIT_TYPE);

    PASS();
}
TEST test_get_entity_type(void){
    Entity ent = create_entity(10,20, UNIT_TYPE);

    ASSERT_EQ(UNIT_TYPE, get_entity_type(ent));

    PASS();
}
TEST test_set_entity_cords(void){
    Entity ent = create_entity(10,20, UNIT_TYPE);

    set_entity_cords(&ent, 20, 30);

    ASSERT_EQ(20, ent.cords.x);
    ASSERT_EQ(30, ent.cords.y);

    PASS();
}
TEST test_set_entity_cords_with_NULL(void){
    set_entity_cords(NULL, 10, 10);

    PASS();
}
TEST test_get_entity_coords(void){
    Entity ent = create_entity(10,20, UNIT_TYPE);

    Coordinates coords = get_entity_coords(ent);

    ASSERT_EQ(10, coords.x);
    ASSERT_EQ(20, coords.y);

    PASS();
}


SUITE(entity_suit){
    RUN_TEST(test_create_entity);
    RUN_TEST(test_set_entity_type);
    RUN_TEST(test_set_entity_type_with_NULL);
    RUN_TEST(test_get_entity_type);
    RUN_TEST(test_set_entity_cords);
    RUN_TEST(test_set_entity_cords_with_NULL);
    RUN_TEST(test_get_entity_coords);
}