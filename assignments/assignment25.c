#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int main(void){
    int descriptor;
    descriptor=open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);
    if(descriptor<0){
        printf("ERROR1!\n");
        return 0;
    }
    
    char *buff;
    printf("escribe lo que quieres guardar: ");
    buff=malloc(sizeof(char)*100);
    fgets(buff, 90, stdin);
    int bytesEscritos;
    bytesEscritos=write(descriptor, buff, strlen(buff));
    if(bytesEscritos!=strlen(buff)){
        printf("ERROR2");
    }
    
    int cerrar=close(descriptor);
    if(cerrar<0){
        printf("ERROR3");
    }
    return 1;
}
