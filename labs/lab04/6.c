#include <stdio.h>

int main() {
    FILE *fp;
    int arr[] = {10, 20, 30, 40, 50};
    int read_arr[5];
    int n = 5;
    
    fp = fopen("data.bin", "wb");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
    
    fp = fopen("data.bin", "rb");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fread(read_arr, sizeof(int), n, fp);
    fclose(fp);
    
    printf("Прочитанный массив: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", read_arr[i]);
    }
    printf("\n");
    
    return 0;
}