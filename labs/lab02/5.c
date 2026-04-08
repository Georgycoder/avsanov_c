#include <stdio.h>

enum Day {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY, 
    SATURDAY,
    SUNDAY
};

struct Event {
    char name[50];
    enum Day day;
};

int main() {
    enum Day today = WEDNESDAY;
    
    printf("Сегодня \n");
    switch(today) {
        case MONDAY:
            printf("Понедельник \n");
            break;
        case TUESDAY:
            printf("Вторник\n");
            break;
        case WEDNESDAY:
            printf("Среда \n");
            break;
        case THURSDAY:
            printf("Четверг\n");
            break;
        case FRIDAY:
            printf("Пятница\n");
            break;
        case SATURDAY:
            printf("Суббота\n");
            break;
        case SUNDAY:
            printf("Воскресенье\n");
            break;
        default:
            printf("Unknown day\n");
    }
    
    struct Event meeting;
    char name[] = "Важное событие";
    int i;
    for(i = 0; name[i] != '\0'; i++) {
        meeting.name[i] = name[i];
    }
    meeting.name[i] = '\0';
    meeting.day = WEDNESDAY;
    
    printf("\nСобытия \n");
    printf("Событие: %s\n", meeting.name);
    printf("День: %d\n", meeting.day);
    
    return 0;
}