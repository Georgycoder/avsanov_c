#include <stdio.h>

int main() 
{
    int num, digit;
    int alleven = 1;

    printf("Введите число N: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            alleven = 0;
            break;
        }

        num = num / 10;
        
    }

    if (alleven)
    {
        printf("Число состоит из четных цифр\n");
    }
    
    else 
    {
        printf("Число содержит нечетные цифры\n");
    }
    
    return 0;
}