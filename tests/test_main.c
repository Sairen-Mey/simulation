#include "greatest.h"

SUITE_EXTERN(resources_suit);
SUITE_EXTERN(coordinates_suit);
SUITE_EXTERN(block_suit);

GREATEST_MAIN_DEFS();

int main(int argc, char **argv){
    GREATEST_MAIN_BEGIN();

    RUN_SUITE(resources_suit);
    RUN_SUITE(coordinates_suit);
    RUN_SUITE(block_suit);

    GREATEST_MAIN_END();
}