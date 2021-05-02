#include <stdio.h>
#define MIN(X,Y) ( (X) < (Y) ? (X) : (Y) )
// @ maybe need the "typeof"
int main(int argc, char const *argv[])
{
    int min = MIN(20,10);
    printf("min number : %d\n", min);
    return 0;
}
