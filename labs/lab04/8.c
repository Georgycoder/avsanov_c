#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    FILE *fp;
    struct Person people[] = {
        {"Анна Смирнова", 20},
        {"Дмитрий Иванов", 22},
        {"Елена Козлова", 19}
    };
    struct Person read_people[3];
    int n = 3;
    
    fp = fopen("people.bin", "wb");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fwrite(people, sizeof(struct Person), n, fp);
    fclose(fp);
    
    fp = fopen("people.bin", "rb");
    if(fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    
    fread(read_people, sizeof(struct Person), n, fp);
    fclose(fp);
    
    printf("Список людей:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s, %d лет\n", i+1, read_people[i].name, read_people[i].age);
    }
    
    return 0;
}