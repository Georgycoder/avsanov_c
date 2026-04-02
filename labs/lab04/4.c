#include <stdio.h>

int main() {
    FILE *fp;
    int a, b;
    float c;
    char name[50];
    
    fp = fopen("data.txt", "w");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fprintf(fp, "%d %d %.2f %s\n", 10, 20, 3.14, "Hello");
    
    fclose(fp);
    
    fp = fopen("data.txt", "r");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fscanf(fp, "%d %d %f %s", &a, &b, &c, name);
    
    printf("Прочитано: a=%d, b=%d, c=%.2f, name=%s\n", a, b, c, name);
    
    fclose(fp);
    
    return 0;
}