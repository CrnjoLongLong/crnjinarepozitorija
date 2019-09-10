#include <stdio.h>
#include <stdlib.h>

#define a 50

int main()
{
    #define a 5
    printf("%d", a);
    return 0;
}
