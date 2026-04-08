#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    printf("Введите %d чисел: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > 0) {
            count++;
        }
    }
    
    printf("Количество положительных чисел: %d", count);
    
    return 0;
}