#include <stdio.h>
#include "entity.h"
#include "coordinates.h"


Entity create_entity(const uint8_t x, const uint8_t y, const ENTITYTYPE type){
    return (Entity){(Coordinates){x,y}, type};
}

void set_entity_type(Entity* ent, const ENTITYTYPE type){
    if (ent == NULL)  return;

    ent->type = type;
}


ENTITYTYPE get_entity_type(const Entity ent){
    return ent.type;
}



void set_entity_cords(Entity* ent, const uint8_t x, const uint8_t y){
    if (ent == NULL) return;
    
    ent->cords = create_coordinates(x,y);
}


Coordinates get_entity_coords(const Entity ent){
    return ent.cords;
}