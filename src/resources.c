#include "resources.h"
#include <stdio.h>

Resource create_resource(const enum RESOURCETYPES type){
    Resource res;
    change_resource_type(&res, type);
    set_count_resource(&res, 0);
    return res;
}

void change_resource_type(Resource* res, const enum RESOURCETYPES type){
    if (res == NULL) return;
    res->type = type;
    if (type == EMPTY) set_count_resource(res, 0);
}

void delete_resource(Resource* res){
    if (res == NULL) return;
    change_resource_type(res, EMPTY);
}

void set_count_resource(Resource* res, const uint8_t count){
    if (res == NULL) return;
    res->count_resource = count;
}

