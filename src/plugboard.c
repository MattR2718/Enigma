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
    printf("\n==========EDIT PLUGBOARD MAPPINGS==========\n");
    printf("  (Enter any char other than A-Z to quit)\n");
    
    char from;
    char to;
    do{
        printf("MAP: ");
        scanf_s(" %c", &from);
        if(from >= 'A' && from <= 'Z'){
            printf("  TO: ");
            scanf_s(" %c", &to);
            if(to >= 'A' && to <= 'Z'){
                /*
                Can only map one letter to another letter
                e.g. A -> F, F -> A
                Cannot then map P -> A since would then also map A -> P
                This would mean A maps to P and F which does not work
                Check whether mapping is valid before applying
                */

                if((mappings->p_mappings + (from - 'A'))->from == (mappings->p_mappings + (from - 'A'))->to
                    && (mappings->p_mappings + (to - 'A'))->from == (mappings->p_mappings + (to - 'A'))->to){

                    (mappings->p_mappings + (from - 'A'))->to = to;
                    (mappings->p_mappings + (to - 'A'))->to = from;
                }else{
                    printf("INVALID MAPPING");
                }
                
            }
        }
        printf("\n");
    }while(from >= 'A' && from <= 'Z' && to >= 'A' && to <= 'Z');
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