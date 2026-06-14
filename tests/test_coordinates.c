#include "coordinates.h"
#include "greatest.h"




TEST test_create_coordinates(void){
    Coordinates cords = {0};

    cords = create_coordinates(5,6);

    ASSERT_EQ(5,cords.x);
    ASSERT_EQ(6,cords.y);

    PASS();
}

TEST test_create_coordinates_limits(void){
    Coordinates cords = {0};

    cords = create_coordinates(200,-300);

    ASSERT_EQ(127, cords.x);
    ASSERT_EQ(-128, cords.y);

    PASS();
}

// ---

TEST test_set_coordinates(void){
    Coordinates coords = create_coordinates(20,20);
    set_coordinates(&coords, 10, 10);

    ASSERT_EQ(10, coords.x);
    ASSERT_EQ(10, coords.y);

    PASS();
}

TEST test_set_coordinates_with_NULL(void){
    set_coordinates(NULL, 10, 10);

    PASS();
}


TEST test_get_coordinate_x(void){
    Coordinates coords = create_coordinates(20,20);

    Coordinates cords = get_coordinates(coords);

    ASSERT_EQ(20, cords.x);

    PASS();
}

TEST test_get_coordinate_y(void){
    Coordinates coords = create_coordinates(20,20);

    Coordinates cords = get_coordinates(coords);

    ASSERT_EQ(20, cords.y);

    PASS();
}

// ---


SUITE(coordinates_suit){
    RUN_TEST(test_create_coordinates);
    RUN_TEST(test_create_coordinates_limits);    
    RUN_TEST(test_set_coordinates);
    RUN_TEST(test_set_coordinates_with_NULL);
    RUN_TEST(test_get_coordinate_x);
    RUN_TEST(test_get_coordinate_y);
}