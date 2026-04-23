#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;

    printf("Value of a: %d\n", a);
    printf("Value using pointer: %d\n", *p);

    return 0;
}