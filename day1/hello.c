#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Output integer = %d\n", a);

    printf("Enter a float value: ");
    scanf("%f", &b);
    printf("Output float = %f\n", b);

    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Output character = %c\n", c);

    return 0;
}