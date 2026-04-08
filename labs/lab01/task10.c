#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int temp;
    
    printf("До обмена: a = %d, b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("После обмена: a = %d, b = %d\n", a, b);
    
    return 0;
}