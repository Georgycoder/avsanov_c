#include <stdio.h>

int main() {
    int n, i, product = 1;
    int found = 0;
    
    printf("Введите N: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            product *= i;
            found = 1;
        }
    }
    
    if(found) {
        printf("%d", product);
    } else {
        printf("0");
    }
    
    return 0;
}