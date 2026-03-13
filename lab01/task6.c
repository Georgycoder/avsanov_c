#include <stdio.h>

int main() {
    int a = 5, b = 2;
    
    // Целочисленное деление
    printf("a / b = %d\n", a / b);
    
    // Деление с приведением типов
    printf("a / b = %.1f\n", (float)a / b);
    
    return 0;
}