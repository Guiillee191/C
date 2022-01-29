#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>


ssize_t write(int fd, const void *buf, size_t count){
    ssize_t (*new_write)(int fd, const void *buf, size_t count);
    new_write = dlsym(RTLD_NEXT, "write");
    ssize_t result;
    
    int descriptor;
    descriptor=open("info.txt", O_WRONLY | O_CREAT, S_IRWXU);
    ssize_t bytesEscritos;
    ssize_t bytesEscritos2;
    //interceptado
    bytesEscritos=new_write(descriptor, buf, count);
    //lo q deberia hacer
    bytesEscritos2=new_write(fd, buf, count);
    int cerrar=close(descriptor);
    return bytesEscritos2;
}
 
