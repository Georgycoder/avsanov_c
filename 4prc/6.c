#include <stdio.h>

int main() {
    int N;
    int digit;
    int count[10] = {0};
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    int original = N;
    
    if (N == 0) {
        count[0] = 1;
    } else {
        if (N < 0) {
            N = -N;
        }
        
        while (N > 0) {
            digit = N % 10;
            count[digit]++;
            N = N / 10;
        }
    }
    
    printf("В числе %d цифры встречаются:\n", original);
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("Цифра %d: %d раз(а)\n", i, count[i]);
        }
    }
    
    return 0;
}