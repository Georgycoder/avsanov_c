#include <stdio.h>

int main() {
    int num;
    
    printf("Введите трехзначное число: ");
    scanf("%d", &num);
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    
    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", units);
    
    return 0;
}