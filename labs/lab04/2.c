#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Ошибка открытия для записи\n");
        return 1;
    }
    
    putc('H', fp);
    putc('e', fp);
    putc('l', fp);
    putc('l', fp);
    putc('o', fp);
    putc('\n', fp);
    
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия для чтения\n");
        return 1;
    }
    
    printf("Содержимое файла: ");
    while((c = getc(fp)) != EOF) {
        putchar(c);
    }
    
    fclose(fp);
    
    return 0;
}