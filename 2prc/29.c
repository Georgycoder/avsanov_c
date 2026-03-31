#include <stdio.h>

int main()
{
    int N, num, max;
    int found = 0;

    printf("Введите число N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("Введите число %d: ", i);
        scanf("%d", &num);

        if (num % 5 == 0)
        {
            if (found == 0)
            {
                max = num;
                found = 1;
            }
            else if (num > max)
            {
                max = num;
            }
        }
    }

    if (found == 1)
    {
        printf("Самое большое число, которое делится на 5: %d", max);
    }
    else
    {
        printf("Среди введеных чисел нет чисел, которые делятся на 5\n");
    }

    return 0;
}