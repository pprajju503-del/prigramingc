#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter an integer :");
    scanf("%d", &a);
    printf("output integer =%d\n", a);
    printf("Enter an float :");
    scanf("%f", &b);
    printf("output float =%f\n", b);
    printf("Enter an character :");
    getchar();
    scanf("%c", &c);
    printf("output character =%c\n", c);
    // system("paused");
    return 0;
}