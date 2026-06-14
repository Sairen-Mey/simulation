#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdint.h>

typedef enum : uint8_t{
    EMPTY_RES,
    TREE_RES,
    STONE_RES,
    IRON_ORE_RES,
    COPPER_ORE_RES,
}  RESOURCETYPES;

typedef struct {
    RESOURCETYPES type;
    uint8_t count_resource;
} Resource;

Resource create_resource(const RESOURCETYPES type);
void set_resource_type(Resource* res, const RESOURCETYPES type);
RESOURCETYPES get_resource_type(const Resource res);

void set_default_resource(Resource* res);

void set_count_resource(Resource* res, const uint8_t count);
uint8_t get_count_resource(const Resource res);





#endif