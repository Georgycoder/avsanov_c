#include <stdio.h>

int main() {
    int x = 7;
    int *ptr = &x;
    int **ptr2 = &ptr;
    
    printf("Значение x через двойной указатель: %d\n", **ptr2);
    return 0;
}