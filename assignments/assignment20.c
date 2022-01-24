#include <stdio.h>

 
typedef struct _values{
    int entero;
    char caracter;
    float flotante;
} Values;
 
int main(void){
    Values v;
    v.entero=10;
    v.caracter='p';
    v.flotante=3.14;
    
    printf("int: %d, char: %c, float: %f", v.entero, v.caracter, v.flotante);
    
    return 0;
}
