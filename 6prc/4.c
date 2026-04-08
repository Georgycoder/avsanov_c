#include <stdio.h>

int main() {
    char vowels[] = "eo";  
    char str[] = "Hello";
    char *p = str;
    
    while (*p) { 
        char *c = vowels;  
        int isVowel = 0;
        
        while (*c) {
            if (*p == *c) {
                isVowel = 1;
                break;
            }
            c++;
        }
        
        if (isVowel) {
            *p = '*'; 
        }
        p++;
    }
    
    
    char *d = str;
    while (*d) {
        printf("%c", *d);
        d++;
    }
    printf("\n");
    
    return 0;
}