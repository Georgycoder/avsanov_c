#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n;
    struct Student *students;
    int oldest = 0;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if(students == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        printf("Студент %d:\n", i+1);
        printf("Имя: ");
        scanf("%s", students[i].name);
        printf("Возраст: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\nСписок студентов:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s, %d лет\n", i+1, students[i].name, students[i].age);
        if(students[i].age > students[oldest].age) {
            oldest = i;
        }
    }
    
    printf("\nСамый старший: %s, %d лет\n", students[oldest].name, students[oldest].age);
    
    free(students);
    
    return 0;
}