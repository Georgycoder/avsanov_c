#include <stdio.h>

int main() {
    int n, i;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {
        if(i % 4 != 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}