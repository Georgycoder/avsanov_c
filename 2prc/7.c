#include <stdio.h>

int main() {
    int n, i;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i * i > 50) {
            printf("%d ", i * i);
        }
    }
    
    return 0;
}