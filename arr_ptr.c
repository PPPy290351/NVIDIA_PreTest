#include <stdio.h>
#include <stdint.h>

char g_arr[] = "abcdefghijklmop";

void arr_func(char arr[10]){ // @ pointer 

    printf("\n==arr_func==\n");
    printf("&arr = 0x%lx\n", (uintptr_t)&arr); // 0x7ffef217cd38
    printf("arr = 0x%lx\n", (uintptr_t)arr); // ! 0x7ffef217cd38
    printf("&arr[0] = 0x%lx\n", (uintptr_t)&arr[0]); // ! 0x7ffef217cd38
    printf("sizeof(arr) = 0x%lx\n", sizeof(arr)); // ! 0xa

}

void ptr_func(char * ptr){

    printf("\n==ptr_func==\n");
    printf("&ptr = 0x%lx\n", (uintptr_t)&ptr); // 0x7ffef217cd38
    printf("ptr = 0x%lx\n", (uintptr_t)ptr); // ! 0x601050
    printf("&ptr[0] = 0x%lx\n", (uintptr_t)&ptr[0]); // ! 0x601050
    printf("sizeof(ptr) = 0x%lx\n", sizeof(ptr)); // 0x8

}

int main(int argc, char const *argv[])
{
    printf("&g_arr = 0x%lx\n", (uintptr_t)&g_arr); // ! 0x601050
    printf("g_arr = 0x%lx\n", (uintptr_t)g_arr); // 0x601050
    printf("&g_arr[0] = 0x%lx\n", (uintptr_t)&g_arr[0]); // ! 0x601050
    printf("sizeof(g_arr) = 0x%lx\n", sizeof(g_arr)); // 0x10

    arr_func(g_arr);
    ptr_func(g_arr);
    return 0;
}
