#include <stdio.h>

enum Course {
    FIRST = 1,
    SECOND,
    THIRD,
    FOURTH
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    float average_score;
};

void copy_string(char *dest, char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int compare_strings(char *str1, char *str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return str1[i] == str2[i];
}

void add_student(struct Student *students, int *count, int max_students) {
    if(*count >= max_students) {
        printf("Список полон!\n");
        return;
    }
    
    struct Student *new_student = &students[*count];
    
    printf("Введите имя: ");
    scanf("%s", new_student->name);
    printf("Введите возраст: ");
    scanf("%d", &new_student->age);
    
    int course_num;
    printf("Введите курс (1-4): ");
    scanf("%d", &course_num);
    new_student->course = (enum Course)course_num;
    
    printf("Введите средний балл: ");
    scanf("%f", &new_student->average_score);
    
    (*count)++;
    printf("Студент добавлен!\n");
}

void print_students(struct Student *students, int count) {
    int i;
    if(count == 0) {
        printf("Список пуст\n");
        return;
    }
    
    printf("\nСписок студентов:\n");
    for(i = 0; i < count; i++) {
        printf("%d. %s, %d лет, %d курс, балл: %.2f\n", 
               i+1, students[i].name, students[i].age, 
               students[i].course, students[i].average_score);
    }
}

void find_by_name(struct Student *students, int count, char *name) {
    int i, found = 0;
    for(i = 0; i < count; i++) {
        if(compare_strings(students[i].name, name)) {
            printf("\nНайден студент:\n");
            printf("Имя: %s\n", students[i].name);
            printf("Возраст: %d\n", students[i].age);
            printf("Курс: %d\n", students[i].course);
            printf("Средний балл: %.2f\n", students[i].average_score);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Студент %s не найден\n", name);
    }
}

void sort_by_average_score(struct Student *students, int count) {
    int i, j;
    for(i = 0; i < count - 1; i++) {
        for(j = 0; j < count - i - 1; j++) {
            if(students[j].average_score < students[j+1].average_score) {
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    printf("Сортировка выполнена\n");
}

int main() {
    struct Student students[100];
    int student_count = 0;
    int choice;
    char search_name[50];
    
    do {
        printf("\nМеню:\n");
        printf("1. Добавить студента\n");
        printf("2. Показать всех\n");
        printf("3. Поиск по имени\n");
        printf("4. Сортировка по баллу\n");
        printf("5. Выход\n");
        printf("Выберите: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                add_student(students, &student_count, 100);
                break;
            case 2:
                print_students(students, student_count);
                break;
            case 3:
                if(student_count > 0) {
                    printf("Введите имя: ");
                    scanf("%s", search_name);
                    find_by_name(students, student_count, search_name);
                } else {
                    printf("Список пуст\n");
                }
                break;
            case 4:
                if(student_count > 0) {
                    sort_by_average_score(students, student_count);
                    print_students(students, student_count);
                } else {
                    printf("Список пуст\n");
                }
                break;
            case 5:
                printf("До свидания\n");
                break;
            default:
                printf("Неверный выбор\n");
        }
    } while(choice != 5);
    
    return 0;
}