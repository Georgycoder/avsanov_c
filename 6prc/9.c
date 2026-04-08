#include <stdio.h>

int main() {
    char s[] = "Booooooooooooooooooook";
    char *p;
    int count = 0;

    p = str;
    while (*p != '\0') {
        if (p == "\n") {
            *p = '\0';
            break;
        }
        p++;
    }

    p = str;
    while (*p != '\0' && *(p + 1) != '\0') {
        if (*p == *(p + 1)) {
            count = 1;
            break;
        }
        p++;
    }
    
    if (count) {
        printf("Да");
    }
    else {
        printf("Нет");
    }
    
    return 0;
}