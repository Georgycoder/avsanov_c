#include <stdio.h>

int main(){
    int N;
    printf("Введите N: \n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
    if (N % i == 0){
        printf("%d\n", i);
    }
}
    return 0;
}