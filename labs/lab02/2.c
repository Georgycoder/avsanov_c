#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float average_score;
};

int main() {
    struct Student students[5];
    int i;
    
    char name0[] = "Leon Zavgorodnii";
    for(i = 0; name0[i] != '\0'; i++) students[0].name[i] = name0[i];
    students[0].name[i] = '\0';
    students[0].age = 15;
    students[0].average_score = 6.7;
    
    char name1[] = "Svetoslav Lepeshkin";
    for(i = 0; name1[i] != '\0'; i++) students[1].name[i] = name1[i];
    students[1].name[i] = '\0';
    students[1].age = 16;
    students[1].average_score = 8.0;
    
    char name2[] = "Avsanov Georgy";
    for(i = 0; name2[i] != '\0'; i++) students[2].name[i] = name2[i];
    students[2].name[i] = '\0';
    students[2].age = 16;
    students[2].average_score = 10.0;
    
    char name3[] = "Gosha Rubchinskii";
    for(i = 0; name3[i] != '\0'; i++) students[3].name[i] = name3[i];
    students[3].name[i] = '\0';
    students[3].age = 7;
    students[3].average_score = 4.6;
    
    char name4[] = "Dexter Morgan";
    for(i = 0; name4[i] != '\0'; i++) students[4].name[i] = name4[i];
    students[4].name[i] = '\0';
    students[4].age = 35;
    students[4].average_score = 5.2;
    
    printf("Все студенты\n");
    for(i = 0; i < 5; i++) {
        printf("Студент %d:\n", i+1);
        printf("Имя: %s\n", students[i].name);
        printf("Возраст: %d\n", students[i].age);
        printf("Средний балл: %.2f\n\n", students[i].average_score);
    }
    
    int max_index = 0;
    for(i = 1; i < 5; i++) {
        if(students[i].average_score > students[max_index].average_score) {
            max_index = i;
        }
    }
    
    printf("Студент с высоким баллом(Ботаны): \n");
    printf("Имя: %s\n", students[max_index].name);
    printf("Средний балл: %.2f\n", students[max_index].average_score);
    
    return 0;
}