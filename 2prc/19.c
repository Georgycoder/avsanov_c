#include <stdio.h>

int main() {
    int n, i;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    printf("Квадраты чётных чисел от 1 до %d:\n", n);
    for(i = 2; i <= n; i += 2) {
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return 0;
}