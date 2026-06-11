#include "coordinates.h"
#include "greatest.h"




TEST test_set_coordinates(void){
    Coordinates cords = {0};

    cords = set_coordinates(5,6);

    ASSERT_EQ(5,cords.x);
    ASSERT_EQ(6,cords.y);

    PASS();
}

TEST test_set_coordinates_limits(void){
    Coordinates cords = {0};

    cords = set_coordinates(200,-300);

    ASSERT_EQ(127, cords.x);
    ASSERT_EQ(-128, cords.y);

    PASS();
}


SUITE(coordinates_suit){
    RUN_TEST(test_set_coordinates);
    RUN_TEST(test_set_coordinates_limits);    
}