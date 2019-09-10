#include <stdio.h>
#include <stdlib.h>

int fun(int n);

int main()
{
    int (*ptr)(int) = fun;
    (*ptr)(3);
    return 0;
}

int fun(int n)
{
    for ( ; n>0; n--)
        printf("Fun\n");
    return 0;
}
