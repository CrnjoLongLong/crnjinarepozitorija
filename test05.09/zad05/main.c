#include <stdio.h>
#include <stdlib.h>

struct test
{
    long long a;
    int b;
    char c, d, e, f;
};

struct test x, y;

int foo(struct test* x, struct test* y)
{
    if (memcmp(x, y, sizeof(struct test)) == 0)
        return 1;
    else
        return 0;
}

int main()
{


    //printf("%d\n", sizeof(struct test));
    printf("%d", foo(&x, &y));
}
