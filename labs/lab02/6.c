#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct Variant {
    union Data data;
    int type;
};

int main() {
    union Data data1;
    data1.i = 10;
    printf("data1.i = %d\n", data1.i);
    
    data1.f = 3.14;
    printf("data1.f = %.2f\n", data1.f);
    printf("data1.i = %d (значение испортилось)\n\n", data1.i);
    
    union Data data2;
    data2.i = 42;
    printf("int: %d, float: %f\n", data2.i, data2.f);
    
    data2.f = 3.14159;
    printf("int: %d, float: %f\n", data2.i, data2.f);
    printf("Видно, что int перезаписался\n\n");
    
    struct Variant var1;
    var1.type = 1;
    var1.data.i = 100;
    
    struct Variant var2;
    var2.type = 2;
    var2.data.f = 99.99;
    
    struct Variant var3;
    var3.type = 3;
    char str[] = "Mr Robot";
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        var3.data.str[i] = str[i];
    }
    var3.data.str[i] = '\0';
    
    if(var1.type == 1) printf("var1: int = %d\n", var1.data.i);
    if(var2.type == 2) printf("var2: float = %.2f\n", var2.data.f);
    if(var3.type == 3) printf("var3: string = %s\n", var3.data.str);
    
    return 0;
}