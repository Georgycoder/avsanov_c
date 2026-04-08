#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    arr = (int*)calloc(n, sizeof(int));
    
    if(arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    printf("Массив после calloc (все элементы равны 0): ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}