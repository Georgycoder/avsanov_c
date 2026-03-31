#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date birth_date;
};

int main() {
    struct Person person;
    char name[] = "Gosha Rubchinskiy";
    int i;
    for(i = 0; name[i] != '\0'; i++) {
        person.name[i] = name[i];
    }
    person.name[i] = '\0';
    person.birth_date.day = 15;
    person.birth_date.month = 3;
    person.birth_date.year = 2001;
    
    printf("=== Person data ===\n");
    printf("Name: %s\n", person.name);
    printf("Birth date: %02d.%02d.%d\n", 
           person.birth_date.day, 
           person.birth_date.month, 
           person.birth_date.year);
    
    printf("\n Ребятишечки, которые родились после 2000: \n");
    
    struct Person people[3];
    
    char name0[] = "Dexter Morgan";
    for(i = 0; name0[i] != '\0'; i++) people[0].name[i] = name0[i];
    people[0].name[i] = '\0';
    people[0].birth_date.day = 10;
    people[0].birth_date.month = 5;
    people[0].birth_date.year = 1999;
    
    char name1[] = "Walter White";
    for(i = 0; name1[i] != '\0'; i++) people[1].name[i] = name1[i];
    people[1].name[i] = '\0';
    people[1].birth_date.day = 22;
    people[1].birth_date.month = 8;
    people[1].birth_date.year = 2002;
    
    char name2[] = "Jesse Pinkman";
    for(i = 0; name2[i] != '\0'; i++) people[2].name[i] = name2[i];
    people[2].name[i] = '\0';
    people[2].birth_date.day = 3;
    people[2].birth_date.month = 12;
    people[2].birth_date.year = 2005;
    
    for(i = 0; i < 3; i++) {
        if(people[i].birth_date.year > 2000) {
            printf("%s - %02d.%02d.%d\n", 
                   people[i].name,
                   people[i].birth_date.day,
                   people[i].birth_date.month,
                   people[i].birth_date.year);
        }
    }
    
    return 0;
}