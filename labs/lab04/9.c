#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[50];
    
    fp = fopen("test.txt", "w");
    fprintf(fp, "0123456789ABCDEFGHIJ");
    fclose(fp);
    
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fseek(fp, 5, SEEK_SET);
    fgets(buffer, 10, fp);
    printf("С позиции 5: %s\n", buffer);
    
    fclose(fp);
    
    return 0;
}