#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Введите N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}