#include <stdio.h>

int main() {
    int n, i, num;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    printf("Введите %d чисел(а): ", n);
    printf("\nЧисла больше 10: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num > 10) {
            printf("%d ", num);
        }
    }
    
    return 0;
}