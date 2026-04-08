#include <stdio.h>

int main() {
    char str[] = "hello world";
    char *p = str;
    int index = 0;
    
    while (*p != '\0') {
        if (index % 2 == 1) {
            if (*p >= 'a' && *p <= 'z') {
                *p = *p - 32;
            }
        }
        p++;
        index++;
    }
    
    printf("Результат: %s\n", str);
    
    return 0;
}