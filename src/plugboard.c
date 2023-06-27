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

    printf("PLUGBOARD INITIALISED\n");

    return ma;
}

void EditPlugboardMappings(struct MappingArray *mappings){

}

void DisplayPlugboardMappings(struct MappingArray *mappings){
    
    printf("\n+----------------------PLUGBOARD----------------------+\n| ");
    for(int i = 0; i < mappings->numElements; i++){
        printf("%c ", (mappings->p_mappings + i)->from);
    }
    printf("|\n| ");
    for(int i = 0; i < mappings->numElements; i++){
        printf("| ");
    }
    printf("|\n| ");
    for(int i = 0; i < mappings->numElements; i++){
        printf("v ");
    }
    printf("|\n| ");
    for(int i = 0; i < mappings->numElements; i++){
        printf("%c ", (mappings->p_mappings + i)->to);
    }
    printf("|\n+-----------------------------------------------------+\n\n");
}