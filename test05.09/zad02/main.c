#include <stdio.h>
#include <stdlib.h>

struct node
{
    short s[5];
    char** p[3];
    union inode
    {
        int a;
        short* q[3];
    };
}__attribute__((packed));

struct node array[10];
int main()
{
    printf("%d", sizeof(array));
    return 0;
}
