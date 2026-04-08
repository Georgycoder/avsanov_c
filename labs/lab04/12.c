#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void add_person() {
    FILE *fp;
    struct Person p;
    
    printf("Введите имя: ");
    scanf("%s", p.name);
    printf("Введите возраст: ");
    scanf("%d", &p.age);
    
    fp = fopen("database.bin", "ab");
    if(fp == NULL) {
        printf("Ошибка открытия файла\n");
        return;
    }
    
    fwrite(&p, sizeof(struct Person), 1, fp);
    fclose(fp);
    
    printf("Запись добавлена\n");
}

void show_all() {
    FILE *fp;
    struct Person p;
    int count = 0;
    
    fp = fopen("database.bin", "rb");
    if(fp == NULL) {
        printf("База данных пуста или не существует\n");
        return;
    }
    
    printf("\nСписок всех записей:\n");
    while(fread(&p, sizeof(struct Person), 1, fp) == 1) {
        printf("%d. Имя: %s, Возраст: %d\n", ++count, p.name, p.age);
    }
    
    fclose(fp);
    
    if(count == 0) {
        printf("Нет записей\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\n--- База данных людей ---\n");
        printf("1. Добавить запись\n");
        printf("2. Показать все записи\n");
        printf("3. Выход\n");
        printf("Выберите: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            add_person();
        }
        else if(choice == 2) {
            show_all();
        }
        else if(choice == 3) {
            printf("До свидания\n");
        }
        else {
            printf("Неверный выбор\n");
        }
    } while(choice != 3);
    
    return 0;
}