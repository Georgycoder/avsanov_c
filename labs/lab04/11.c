#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    
    fp = fopen("test.txt", "w");
    fprintf(fp, "ABC");
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    printf("Чтение файла: ");
    while(1) {
        c = getc(fp);
        
        if(feof(fp)) {
            printf("\nДостигнут конец файла\n");
            break;
        }
        
        if(ferror(fp)) {
            printf("Ошибка при чтении\n");
            break;
        }
        
        putchar(c);
    }
    
    fclose(fp);
    
    return 0;
}