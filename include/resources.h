#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdint.h>

typedef enum{
    EMPTY,
    TREE,
    STONE,
    IRON_ORE,
    COPPER_ORE,
}  RESOURCETYPES;

typedef struct {
    uint8_t type;
    uint8_t count_resource;
} Resource;


Resource create_resource(const RESOURCETYPES type);
void change_resource_type(Resource* res, const RESOURCETYPES type);
void delete_resource(Resource* res);
void set_count_resource(Resource* res, const uint8_t count);

#endif