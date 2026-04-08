#include <stdio.h>

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    printf("Последняя цифра: %d\n", num % 10);
    
    return 0;
}