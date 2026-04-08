#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index, value;
    int *arr;
    int *tmp;

printf("Введите размер массива: ");
scanf("%d", &n);

arr = (int*)malloc(n * sizeof(int));

if (arr == NULL) {
    printf("Ошибка выделения памяти\n");
    return 1;
}

printf("Введите %d элементов: \n", n);
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("Введите индекс для вставки (0-%d): ", n - 1);
scanf("%d", &index);
printf("Введите значение");
scanf("%d", &value);

if (index < 0 || index >= n) {
    printf("Неверный индекс");
    free(arr);
    return 1;
}
n;

tmp = (int*)realloc(arr, n * sizeof(int));
if (tmp == NULL && n > 0) {
    printf("Ошибка преревыделения памяти\n");
    free(arr);
    return 1;
}
arr = tmp;

for (int i = n; i > index; i--) {
    arr[i] = arr[i - 1];
}
arr[index] = value;

printf("Массив после вставки: ");
for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
printf("\n");

free(arr);

return 0;
}


