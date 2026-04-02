#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];
    
    printf("Введите строку: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fputs(buffer, fp);
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    printf("Содержимое файла: ");
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    
    return 0;
}