#include <stdio.h>

int main() {
    FILE *fp;
    long size;
    
    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello World!");
    fclose(fp);
    
    fp = fopen("test.txt", "rb");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    
    printf("Размер файла: %ld байт\n", size);
    
    fclose(fp);
    
    return 0;
}