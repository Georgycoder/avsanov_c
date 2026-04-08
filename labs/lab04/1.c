#include <stdio.h>

int main() {
    FILE *fp;
    
    fp = fopen("test.txt", "w");
    
    if(fp == NULL) {
        printf("Ошибка: не удалось открыть файл\n");
        return 1;
    }
    
    printf("Файл успешно открыт\n");
    
    fclose(fp);
    
    return 0;
}