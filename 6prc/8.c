#include <stdio.h>

int main() {
    char pass[100];
    char *p;
    int hasDigit = 0;
    int hasLetter = 0;
    
    printf("Введите пароль: ");
    scanf("%s", &pass);

    p = pass;
    while (*p != '\0') {
        if (*p >= '\0' && *p <= '9') {
            hasDigit = 1;
        }
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            hasLetter = 1;
        }
        p++;
    }

    if (hasDigit && hasLetter) {
        printf("Буквы - есть, цифры - есть => пароль надежный");
    }
    else {
        printf("Пароль ненадежный\n");
        if (!hasDigit) {
            printf("Нет цифр\n");
        }
        if (!hasLetter) {
            printf("Нет букв\n");
        }
        
    }
    
    return 0;
}
