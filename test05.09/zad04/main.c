#include <stdio.h>
#include <stdlib.h>

int f(int *p, int n)
{
    *(p+n-8) += *(p+n) + 1;
    *(p) = 2;
    return *(p+n);
}

int main()
{
    int niz[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", f(niz, niz[8]));
    printf("%d %d %d", niz[1], niz[2], niz[0]);
    return 0;
}
