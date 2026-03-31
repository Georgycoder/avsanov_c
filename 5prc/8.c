#include <stdio.h>

void change(int **ptr) {
    **ptr = 99;
}

int main() {
    int x = 5;
    int *p = &x;
    change(&p);
    printf("Новое значение: %d\n", x);
    return 0;
}