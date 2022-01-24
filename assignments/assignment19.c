#include <stdlib.h>
#include <stdio.h>

int main(void){
    char *pointer=malloc(sizeof(char)*100);
    if(pointer==NULL){
        printf("ERROR allocating memory\n");
        return 1;
    }else{
        printf("Allocation was successfull\n");
        free(pointer);
    }
    
    return 0;
}
