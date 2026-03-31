#include <stdio.h>

int main() {
    int n, i;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            printf("Fizz ");
        } else {
            printf("%d ", i);
        }
    }
    
    return 0;
}