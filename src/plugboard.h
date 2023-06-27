#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <stdio.h>
#include <stdlib.h>

struct Mapping{
    char from;
    char to;
};

struct MappingArray{
    struct Mapping *p_mappings;
    int numElements;
};

//Initialise plugboard to map A->A, B->B ... Z->Z
struct MappingArray *InitialisePlugboard();
//Allow user inputted plugs
void EditPlugboardMappings(struct MappingArray *mappings);
//Display Mappings
void DisplayPlugboardMappings(struct MappingArray *mappings);


#endif