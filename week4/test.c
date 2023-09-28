#include <stdio.h>

int main()
{
    int i = 0;
    int k;
    k = ++i + ++i;
    printf("%d", k);
    return 0;
}