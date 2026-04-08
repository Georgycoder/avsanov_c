#include <stdio.h>

int main() {
    int x = 42;
    int *p1 = &x;
    int *p2 = p1;
    
    printf("Значение через p2: %d\n", *p2);
    *p2 = 100;
    printf("Новое значение x: %d\n", x);
    
    return 0;
}