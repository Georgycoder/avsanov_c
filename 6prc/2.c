#include <stdio.h>

int main() {
    char str[] = "Hello";
    int len_str = sizeof(str) / sizeof(str[0]);
    char *p = str + len_str;

    for (int i = len_str; i >= 0; i--)
    {
        printf("%p\n", p);
        p--;
    }
    return 0;
}