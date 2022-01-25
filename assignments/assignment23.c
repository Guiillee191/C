#include <stdio.h>

typedef struct _mine{
    int ID;
}Mine;


int main(void){
    Mine *puntero;
    Mine estructura;
    
    puntero=&estructura;
    
    //standard dot-notation instance
    estructura.ID=100;
    printf("standard dot-notation: %d\n", estructura.ID);
    //standard dot-notation pointer
    (*puntero).ID=101;
    printf("standard dot-notation: %d\n", estructura.ID);
    //indirect membership operator 
    puntero->ID=102;
    printf("indirect membership operator: %d\n", estructura.ID);
    return 0;
}
