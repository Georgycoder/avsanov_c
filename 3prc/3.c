#include <stdio.h>

int main() {
    int N;
    int maxdigit;
    int temp;

    printf("Введите число N: ");
    scanf("%d", &N);

    temp = N;

    if(temp < 0) {
        temp = -temp;
    }
    
    while(temp > 0) {
        int digit = temp % 10;
    }
    return 0;
}