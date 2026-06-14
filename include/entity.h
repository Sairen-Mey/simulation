#ifndef ENTITY_H
#define ENTITY_H

#include <stdint.h>
#include "coordinates.h"


typedef enum : uint8_t{
    UNIT_TYPE,
    SUPER_UNIT_TYPE,
    GENERATOR_TYPE,
    ELECTRIC_POLE_TYPE,
    INFO_POLE_TYPE
} ENTITYTYPE;



typedef struct{
    Coordinates cords;
    ENTITYTYPE type;
} Entity;


Entity create_entity(const uint8_t x, const uint8_t y, const ENTITYTYPE type);
void set_entity_type(Entity* ent, const ENTITYTYPE type);
ENTITYTYPE get_entity_type(const Entity ent);

Coordinates get_entity_coords(const Entity ent);
void set_entity_cords(Entity* ent, const uint8_t x, const uint8_t y);

#endif