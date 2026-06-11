#include "resources.h"
#include <stdio.h>

Resource create_resource(const RESOURCETYPES type){
    return (Resource){type,0};
}

void change_resource_type(Resource* res, const RESOURCETYPES type){
    if (res == NULL) return;

    if (res->type != type){
        res->type = type;
        set_count_resource(res, 0);
    }
}

void delete_resource(Resource* res){
    if (res == NULL) return;
    change_resource_type(res, EMPTY);
}

void set_count_resource(Resource* res, const uint8_t count){
    if (res == NULL) return;
    res->count_resource = count;
}

