#include <stdio.h>
int main(int argc, char const *argv[])
{
    // char c;
    unsigned char c;
    char str[128];
    for(c=0; c<128; c++){
        printf("%d\n", c);
        str[c] = 0;
    }
    return 0;
}

// @ the wrong point is "char", because 1 byte could represent 0~255
// @ and char is signed, so range : 0~127, and overflow here if continue add (c++)
// @ it will be infinite loop, we can replace 'char' with 'unsigned char' to make it work properly.