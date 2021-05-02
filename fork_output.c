#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int p = fork();
    if(p < 0){
        printf("fork failed");
        exit(1);
    }else if(p == 0){
        printf("Hello , I'm child\n");
    }else{
        printf("Hello , I'm parent\n");
    }
    return 0;
}
