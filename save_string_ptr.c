#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * saveString(const char * s)
{
    /* allocate memory for a copy of the input string s */
    char * p = malloc(strlen(s));
    while(*s){
        *p++ = *s++;
    }
    return p; // @ p is not the correct offset by "*p++"
}

int main(int argc, char const *argv[])
{
    char hello[20] = "Hello World\n";
    printf("copy %s\n", saveString(hello));
    return 0;
}
