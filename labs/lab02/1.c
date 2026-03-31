#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float average_score;
};

int main() {
    struct Student student1;
    
    int i;
    char name1[] = "Gosha";
    for(i = 0; name1[i] != '\0'; i++) {
        student1.name[i] = name1[i];
    }
    student1.name[i] = '\0';
    student1.age = 67;
    student1.average_score = 10;
    
    printf("Студент\n");
    printf("Гоша: %s\n", student1.name);
    printf("Возраст: %d\n", student1.age);
    printf("Средний балл: %.2f\n\n", student1.average_score);
    
    struct Student student2;
    printf("Введите данные студента: \n");
    printf("Имя: ");
    scanf("%s", student2.name);
    printf("Возраст: ");
    scanf("%d", &student2.age);
    printf("Средний балл: ");
    scanf("%f", &student2.average_score);
    
    printf("\nДанные студента \n");
    printf("Имя: %s\n", student2.name);
    printf("Возраст: %d\n", student2.age);
    printf("Средний балл: %.2f\n", student2.average_score);
    
    return 0;
}