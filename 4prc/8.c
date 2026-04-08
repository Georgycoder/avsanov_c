#include <stdio.h>

int main() {
    int n;
    printf("Введите размер массива:\n ");
    scanf("%d", &n);
    int arr[n];

    printf("Введите элементы массива:\n ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Массив выглядит так:\n ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}