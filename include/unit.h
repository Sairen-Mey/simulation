#ifndef UNIT_H
#define UNIT_H

#include <stdint.h>

#include "entity.h"
#include "resources.h"

typedef enum : uint8_t{
    STATE_WALKING,
    STATE_BACK,
    STATE_MINING,
    STATE_RESEARCH,
    STATE_SOS
} UNITSTATE;




typedef struct{
    Entity entity;
    uint8_t battery;
    UNITSTATE state;
    Resource resource;
}Unit;

Unit create_unit(const uint8_t x, const uint8_t y, const ENTITYTYPE type);

void set_battery(Unit* unit, const uint8_t count);
uint8_t get_battery(Unit unit);

void set_state(Unit* unit, const UNITSTATE state);
UNITSTATE get_state(Unit unit);

void set_resource(Unit* unit, const RESOURCETYPES type, const uint8_t count);
Resource get_resource(Unit unit);
#endif