#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p1 = &a, *p2 = &b, *p3 = &a;
    
    if (p1 == p3) {
        printf("p1 и p3 указывают на один адрес\n");
    }
    
    if (p1 != p2) {
        printf("p1 и p2 указывают на разные адреса\n");
    }
    
    return 0;
}