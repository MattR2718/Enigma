#ifndef PLUGBOARD_H
#define PLUGBOARD_H

struct Mapping{
    char from;
    char to;
};

struct MappingArray{
    struct Mapping *p_mappings;
    int numElements;
};




#endif