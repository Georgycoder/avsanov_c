#include <stdio.h>

int main() {
    int n, i, num, count = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    printf("Введите %d чисел(а):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 7 == 0) {
            count++;
        }
    }
    
    printf("Количество чисел, делящихся на 7: %d\n", count);
    
    return 0;
}