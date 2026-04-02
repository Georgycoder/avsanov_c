#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];
    
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fputs("Первая строка\n", fp);
    fputs("Вторая строка\n", fp);
    fputs("Третья строка\n", fp);
    
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    printf("Содержимое файла:\n");
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    
    return 0;
}