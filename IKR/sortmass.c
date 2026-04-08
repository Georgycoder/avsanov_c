#include <stdio.h>

int main() {
    int arrsize;
    int arr[100];
    int i, j, temp;
    
    printf("Введите размер массива: ");
    scanf("%d", &arrsize);
    
    printf("Введите %d элементов массива: ", arrsize);
    for(i = 0; i < arrsize; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < arrsize - 1; i++) {
        for(j = 0; j < arrsize - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Отсортированный массив: ");
    for(i = 0; i < arrsize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}