#include <stdio.h>

int main()
{
    int N, K;

    printf("Введите числа N и K: ");
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i + j == K)
            {
                printf("(%d, %d)", i, j);
            }
        }
    }

    return 0;
}