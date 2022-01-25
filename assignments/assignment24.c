#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 


int main(void){
    int descriptor;
    descriptor=open("testfile.txt", O_RDONLY | O_CREAT, S_IRUSR);
    if(descriptor<0){
        printf("ERROR!\n");
        return 0;
    }else{
        printf("OK!\n");
    }
    return 1;
}
