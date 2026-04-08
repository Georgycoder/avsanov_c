#include <stdio.h>

int main() {
    int n, i, count = 0;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}