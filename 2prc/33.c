#include <stdio.h>

int main()
{
    int N;

    printf("Введите высоту треугольника: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}