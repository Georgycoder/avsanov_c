#include <stdio.h>

int main()
{
    int N;

    printf("Введите число N: ");
    scanf("%d", &N);

    if (N <= 1)
    {
        printf("Нет простых чисел в указанном диапазоне.\n");
    }
    else
    {
        for (int num = 2; num <= N; num++)
        {
            int isPrime = 1;

            for (int div = 2; div < num; div++)
            {
                if (num % div == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
            {
                printf("%d ", num);
            }
        }
        printf("\n");
    }

    return 0;
}