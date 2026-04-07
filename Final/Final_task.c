#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct Person {
    char name[100];
    int age;
    float height;
    int birth_year;
};

struct Person *people = NULL;
int count = 0;
int capacity = 0;

// void add_person();
// void print_all();
// void sort_by_name();
// void sort_by_age();
// void statistics();
// void search_by_name();
// void search_by_age_range();
// void save_to_binary();
// void load_from_binary();
// void exit_program();

int validate_name(char *name) {
    for(int i = 0; name[i] != '\0'; i++) {
        if(!isalpha(name[i]) && name[i] != ' ') {
            return 0;
        }
    }
    return 1;
}

int validate_positive(int value) {
    return value > 0;
}

int validate_positive_float(float value) {
    return value > 0;
}

int calculate_age(int birth_year) {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int current_year = now->tm_year + 1900;
    return current_year - birth_year;
}

void (*menu_functions[])(void) = {
    add_person,
    print_all,
    sort_by_name,
    sort_by_age,
    statistics,
    search_by_name,
    search_by_age_range,
    save_to_binary,
    load_from_binary,
    exit_program
};

void add_person() {
    if(count >= capacity) {
        capacity = capacity == 0 ? 2 : capacity * 2;
        struct Person *tmp = realloc(people, capacity * sizeof(struct Person));
        if(tmp == NULL) {
            printf("Ошибка выделения памяти!\n");
            return;
        }
        people = tmp;
    }
    
    struct Person new_person;
    
    printf("Введите имя: ");
    scanf(" %[^\n]", new_person.name);
    while(!validate_name(new_person.name)) {
        printf("Ошибка! Имя должно содержать только буквы. Введите снова: ");
        scanf(" %[^\n]", new_person.name);
    }
    
    printf("Введите возраст: ");
    scanf("%d", &new_person.age);
    while(!validate_positive(new_person.age)) {
        printf("Ошибка! Возраст должен быть положительным. Введите снова: ");
        scanf("%d", &new_person.age);
    }
    
    printf("Введите рост: ");
    scanf("%f", &new_person.height);
    while(!validate_positive_float(new_person.height)) {
        printf("Ошибка! Рост должен быть положительным. Введите снова: ");
        scanf("%f", &new_person.height);
    }
    
    printf("Введите год рождения: ");
    scanf("%d", &new_person.birth_year);
    
    people[count] = new_person;
    count++;
    
    printf("Запись добавлена! Всего записей: %d\n", count);
}

void print_all() {
    if(count == 0) {
        printf("Нет записей!\n");
        return;
    }
    
    printf("\nСписок всех записей\n");
    for(int i = 0; i < count; i++) {
        printf("%d. %s  Возраст: %d  Рост: %.2f  Год рождения: %d\n", 
               i+1, people[i].name, people[i].age, people[i].height, people[i].birth_year);
    }
    printf("Всего: %d записей\n", count);
}

void sort_by_name() {
    if(count == 0) {
        printf("Нет записей для сортировки!\n");
        return;
    }
    
    for(int i = 0; i < count - 1; i++) {
        for(int j = 0; j < count - i - 1; j++) {
            if(strcmp(people[j].name, people[j+1].name) > 0) {
                struct Person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }
    
    printf("Сортировка по имени выполнена!\n");
    print_all();
}

void sort_by_age() {
    if(count == 0) {
        printf("Нет записей для сортировки!\n");
        return;
    }
    
    for(int i = 0; i < count - 1; i++) {
        for(int j = 0; j < count - i - 1; j++) {
            if(people[j].age > people[j+1].age) {
                struct Person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }
    
    printf("Сортировка по возрасту выполнена!\n");
    print_all();
}

void statistics() {
    if(count == 0) {
        printf("Нет записей для статистики!\n");
        return;
    }
    
    int total_age = 0;
    float max_height = people[0].height;
    int min_age = people[0].age;
    int max_age = people[0].age;
    
    for(int i = 0; i < count; i++) {
        total_age += people[i].age;
        if(people[i].height > max_height) {
            max_height = people[i].height;
        }
        if(people[i].age < min_age) {
            min_age = people[i].age;
        }
        if(people[i].age > max_age) {
            max_age = people[i].age;
        }
    }
    
    float avg_age = (float)total_age / count;
    
    printf("\nСтатистика\n");
    printf("Всего записей: %d\n", count);
    printf("Средний возраст: %.2f\n", avg_age);
    printf("Максимальный рост: %.2f\n", max_height);
    printf("Минимальный возраст: %d\n", min_age);
    printf("Максимальный возраст: %d\n", max_age);
    
    printf("\nАктуальный возраст (по текущей дате)\n");
    for(int i = 0; i < count; i++) {
        int real_age = calculate_age(people[i].birth_year);
        printf("%s: %d лет\n", people[i].name, real_age);
    }
}

void search_by_name() {
    if(count == 0) {
        printf("Нет записей!\n");
        return;
    }
    
    char search_name[100];
    printf("Введите имя для поиска: ");
    scanf(" %[^\n]", search_name);
    
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(strstr(people[i].name, search_name) != NULL) {
            printf("Найдено: %s  Возраст: %d  Рост: %.2f  Год рождения: %d\n",
                   people[i].name, people[i].age, people[i].height, people[i].birth_year);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Запись с именем '%s' не найдена\n", search_name);
    }
}

void search_by_age_range() {
    if(count == 0) {
        printf("Нет записей!\n");
        return;
    }
    
    int min_age, max_age;
    printf("Введите минимальный возраст: ");
    scanf("%d", &min_age);
    printf("Введите максимальный возраст: ");
    scanf("%d", &max_age);
    
    int found = 0;
    printf("\nРезультаты поиска (возраст от %d до %d)\n", min_age, max_age);
    for(int i = 0; i < count; i++) {
        if(people[i].age >= min_age && people[i].age <= max_age) {
            printf("%s  Возраст: %d  Рост: %.2f  Год рождения: %d\n",
                   people[i].name, people[i].age, people[i].height, people[i].birth_year);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Записи не найдены\n");
    }
}

void save_to_binary() {
    if(count == 0) {
        printf("Нет записей для сохранения!\n");
        return;
    }
    
    FILE *fp = fopen("people.bin", "wb");
    if(fp == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return;
    }
    
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(people, sizeof(struct Person), count, fp);
    fclose(fp);
    
    printf("Сохранено %d записей в файл 'people.bin'\n", count);
}

void load_from_binary() {
    FILE *fp = fopen("people.bin", "rb");
    if(fp == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return;
    }
    
    int loaded_count;
    fread(&loaded_count, sizeof(int), 1, fp);
    
    if(loaded_count == 0) {
        printf("Файл пуст\n");
        fclose(fp);
        return;
    }
    
    struct Person *loaded_people = malloc(loaded_count * sizeof(struct Person));
    if(loaded_people == NULL) {
        printf("Ошибка выделения памяти!\n");
        fclose(fp);
        return;
    }
    
    fread(loaded_people, sizeof(struct Person), loaded_count, fp);
    fclose(fp);
    
    if(people != NULL) {
        free(people);
    }
    
    people = loaded_people;
    count = loaded_count;
    capacity = count;
    
    printf("Загружено %d записей из файла 'people.bin'\n", count);
}

void exit_program() {
    if(people != NULL) {
        free(people);
    }
    printf("До свидания!\n");
}

void print_menu() {
    printf("\nМЕНЮ\n");
    printf("1. Добавить запись\n");
    printf("2. Вывести все записи\n");
    printf("3. Сортировка по имени\n");
    printf("4. Сортировка по возрасту\n");
    printf("5. Статистика\n");
    printf("6. Поиск по имени\n");
    printf("7. Поиск по диапазону возраста\n");
    printf("8. Сохранить в бинарный файл\n");
    printf("9. Загрузить из бинарного файла\n");
    printf("10. Выход\n");
    printf("\n");
    printf("Выберите действие: ");
}

int main() {
    int choice;
    
    printf("Менеджер персональных данных\n");
    
    do {
        print_menu();
        scanf("%d", &choice);
        
        if(choice >= 1 && choice <= 10) {
            menu_functions[choice - 1]();
        } else {
            printf("Неверный выбор! Попробуйте снова.\n");
        }
    } while(choice != 10);
    
    return 0;
}