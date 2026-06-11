#ifndef RESOURSE_H
#define RESOURSE_H

#include <stdint.h>

enum RESOURCETYPES : uint8_t{
    EMPTY,
    TREE,
    STONE,
    IRON_ORE,
    COPPER_ORE,
};

typedef struct {
    uint8_t type;
    uint8_t count_resource;
} Resource;


Resource create_resource(const enum RESOURCETYPES type);
void change_resource_type(Resource* res, const enum RESOURCETYPES type);
void delete_resource(Resource* res);
void set_count_resource(Resource* res, const uint8_t count);

#endif