#include <stdio.h>
 
int main(void)
{
    int a = 10;
    int b = 2;
     
    int *pa = &a;
    int *pb = &b;
     
    printf("Variable a: address=%p \t value=%d \n", (void*)pa, *pa);
    printf("Variable b: address=%p \t value=%d \n", (void*)pb, *pb);
     
    pa = pb;
    printf("Variable b: address=%p \t value=%d \n", (void*)pa, *pa);
     
    return 0;
}