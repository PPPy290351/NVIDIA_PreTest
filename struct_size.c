#include <stdio.h>
// typedef struct s
// {
//     unsigned char a;
//     long long b;
//     unsigned int c;
// } s_t; // @ 24 bytes; because alignment

typedef struct s
{
    long long b;
    unsigned int c;
    unsigned char a;
} s_t; // @ 16 bytes; better memory usage

int main(int argc, char const *argv[])
{
    printf("size of struct : %ld\n", sizeof(s_t));
    return 0;
}
