#include <stdio.h>

int main() {
    char str[] = "Hello!!! World!!!";
    char *p = str;
    int count = 0;
    
    while (*p != '\0') {
        if (*p == '!') {
            count++;
        }
        p++;
    }
    
    if (count > 3) {
        printf("STOP\n");
    } else {
        printf("OK\n");
    }
    
    return 0;
}