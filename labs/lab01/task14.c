#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Адрес a: %p\n", (void*)&a);
    printf("Адрес b: %p\n", (void*)&b);
    printf("Адрес c: %p\n", (void*)&c);
    
    int diff_ab = (char*)&b - (char*)&a;
    int diff_bc = (char*)&c - (char*)&b;
    
    printf("\nРазница между a и b: %d байт\n", diff_ab);
    printf("Разница между b и c: %d байт\n", diff_bc);
    
    printf("\nОбъяснение: Переменные расположены в стеке ");
    printf("последовательно. Разница между адресами обычно ");
    printf("равна размеру типа int (4 байта), но может быть больше ");
    printf("из-за выравнивания компилятором.\n");
    
    return 0;
}