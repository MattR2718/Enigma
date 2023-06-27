#include "plugboard.h"


struct MappingArray *InitialisePlugboard(){
    int numElements = 26;
    struct Mapping *p_maps = malloc(sizeof(struct Mapping) * numElements);
    for(int i = 0; i < numElements; i++){
        (p_maps + i)->from = 'A' + i;
        (p_maps + i)->to = 'A' + i;
    }

    struct MappingArray *ma = malloc(sizeof(struct MappingArray));
    ma->p_mappings = p_maps;
    ma->numElements = numElements;

    return ma;
}

void ApplyMappings(struct MappingArray *mappings){

}