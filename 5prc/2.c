#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 25;
    printf("Новое значение: %d\n", x);
    return 0;
}