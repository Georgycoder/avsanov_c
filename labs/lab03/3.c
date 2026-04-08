#include <stdio.h>
#include <stdlib.h>

int find_max(int *arr, int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int *arr, int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int find_sum(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    int *arr;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    printf("Введите %d элементов:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Максимальный: %d\n", find_max(arr, n));
    printf("Минимальный: %d\n", find_min(arr, n));
    printf("Сумма: %d\n", find_sum(arr, n));
    
    free(arr);
    
    return 0;
}