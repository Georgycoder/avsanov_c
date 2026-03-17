#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num < 0) {
            sum += num;
        }
    }
    
    printf("%d", sum);
    
    return 0;
}