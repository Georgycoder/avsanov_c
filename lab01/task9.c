#include <stdio.h>

int main() {
    int x;
    
    printf("Введите x: ");
    scanf("%d", &x);
    
    int result1 = x*x + 2*x + 1;
    int result2 = (x + 1)*(x + 1) - (x - 1)*(x - 1);
    
    printf("x^2 + 2x + 1 = %d\n", result1);
    printf("(x + 1)^2 - (x - 1)^2 = %d\n", result2);
    
    return 0;
}