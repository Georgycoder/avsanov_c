#include <stdio.h>
#include <stdlib.h>

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
    
    printf("Массив: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}