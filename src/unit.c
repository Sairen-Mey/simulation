
#include "unit.h"


Unit create_unit(const uint8_t x, const uint8_t y, const ENTITYTYPE type){
    return (Unit){
        .entity = create_entity(x,y,type),
        .battery = 100,
        .state = STATE_WALKING,
        .resource = create_resource(EMPTY_RES, 0),
    };
}

void set_battery(Unit* unit, const uint8_t count){
    if (unit == NULL) return;
    unit->battery = count;
}

uint8_t get_battery(Unit unit){
    return unit.battery;
}

void set_state(Unit* unit, const UNITSTATE state){
    if (unit == NULL) return;
    if (state != unit->state) unit->state = state;
}

UNITSTATE get_state(Unit unit){
    return unit.state;
}

void set_resource(Unit* unit, const RESOURCETYPES type, const uint8_t count){
    if (unit == NULL) return;
    unit->resource = create_resource(type,count);
}

Resource get_resource(Unit unit){
    return unit.resource;
}

