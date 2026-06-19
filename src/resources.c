#include "resources.h"
#include <stdio.h>

Resource create_resource(const RESOURCETYPES type, const uint8_t count){
    return (Resource){type,count};
}

void set_resource_type(Resource* res, const RESOURCETYPES type){
    if (res == NULL) return;

    if (res->type != type){
        res->type = type;
        set_count_resource(res, 0);
    }
}

RESOURCETYPES get_resource_type(const Resource res){
    return res.type;
}


void set_default_resource(Resource* res){
    if (res == NULL) return;
    set_resource_type(res, EMPTY_RES);
}

void set_count_resource(Resource* res, const uint8_t count){
    if (res == NULL) return;
    res->count_resource = count;
}

uint8_t get_count_resource(const Resource res){
    return res.count_resource;
}