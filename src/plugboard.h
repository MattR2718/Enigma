#ifndef PLUGBOARD_H
#define PLUGBOARD_H

#include <stdlib.h>

struct Mapping{
    char from;
    char to;
};

struct MappingArray{
    struct Mapping *p_mappings;
    int numElements;
};

struct MappingArray *InitialisePlugboard();
void ApplyMappings(struct MappingArray *mappings);


#endif