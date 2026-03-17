#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Введите числа (0 для завершения):\n");
    
    scanf("%d", &num);
    while (num != 0)
    {
        if (num > 0)
        {
            num += sum;
        }
        
    }

    printf("Сумма положительных чисел = %d", sum);

    return 0;
}