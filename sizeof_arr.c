#include <stdio.h>
int my_arr[] = {21,22,23,24,25,26};
#define MY_ARR_SIZE (sizeof(my_arr)/sizeof(my_arr[0]))

int main(int argc, char const *argv[])
{
    int d = -1;
    int x = 0;
    printf("[Debug] arr_size : %ld\n", MY_ARR_SIZE); // ! X : I guess here is 4/4 = 1, because the my_arr and my_arr[0] are the same address.
    printf("[Debug] address of : %p\n", my_arr);
    printf("[Debug] address of : %p\n", &my_arr[0]);
    // @ my_arr is the base address of array, so no matter to use my_arr / &my_arr; they are the same.
    // @ my_arr[0] is the element, so if only give my_arr[0] to "%p", that will show its value in hex, need to add '&' to reference it.
    if(d <= MY_ARR_SIZE){ // @ d <= 6
        x = my_arr[d+2];
    }

    printf("%d\n", x);

    return 0;
}
