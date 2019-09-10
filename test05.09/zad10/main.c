#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'c';
    char* q;
    float** r;
    printf("%d %d %d %d ", sizeof(q), sizeof(r), sizeof('c'), sizeof(c));
    return 0;
}
