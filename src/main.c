#include <stdio.h>
#include <stdlib.h>

#include "plugboard.h"

void printMenu(){
    printf("==========MENU==========\n");
    printf("    1) Reset Plugboard\n");
    printf("    2) Enter Plugboard Mappings\n");
    printf("    3) Display Plugboard Mappings\n");
    printf("    0) Exit\n");
    printf("\nEnter Option: ");
}

int main(){
    struct MappingArray *p_plugboard = InitialisePlugboard();
    int option = 0;
    do{
        printMenu();
        scanf_s("%d", &option);
        switch(option){
            case 1: p_plugboard = InitialisePlugboard(); break;
            case 2: EditPlugboardMappings(p_plugboard); break;
            case 3: DisplayPlugboardMappings(p_plugboard);

            case 0: break;
            default: break; //Invalid Choice
        }
    }while(option);
}
