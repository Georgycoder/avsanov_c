#include <stdio.h>

int main() {
    int n, i, num, min;
    int found = 0;
    
    printf("Введите количество чисел: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            if(!found || num < min) {
                min = num;
                found = 1;
            }
        }
    }
    
    if(found) {
        printf("%d", min);
    } else {
        printf("Нет чётных чисел");
    }
    
    return 0;
}