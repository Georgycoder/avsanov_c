#include <stdio.h>

int main()
{
    char s[] = "banana";
    char del = 'a';
    char *r = s;
    char *w = s;
    while (*r != '\0') {
        if (*r != del)
            *w++ = *r;
        r++;
    }
    *w = '\0';
    printf("%s\n", s);
    return 0;
}
