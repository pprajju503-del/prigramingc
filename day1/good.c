#include <stdio.h>

static int num = 20;

void show();

int main() {
    show();
    return 0;
}

void show() {
    extern int num;
    printf("num = %d\n", num);
}