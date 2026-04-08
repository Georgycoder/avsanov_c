#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    int *arr;
    int *tmp;
    
    printf("Введите начальный размер: ");
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
    
    printf("Введите новый размер (больше %d): ", n);
    scanf("%d", &m);
    
    tmp = (int*)realloc(arr, m * sizeof(int));
    if(tmp == NULL) {
        printf("Ошибка перевыделения памяти\n");
        free(arr);
        return 1;
    }
    arr = tmp;
    
    printf("Введите %d новых элементов:\n", m - n);
    for(int i = n; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Массив после увеличения: ");
    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Введите новый размер (меньше %d): ", m);
    scanf("%d", &n);
    
    tmp = (int*)realloc(arr, n * sizeof(int));
    if(tmp == NULL && n > 0) {
        printf("Ошибка перевыделения памяти\n");
        free(arr);
        return 1;
    }
    arr = tmp;
    
    printf("Массив после уменьшения: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}