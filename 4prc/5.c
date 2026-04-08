#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    int hasfive;

    printf("Введите число N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        hasfive = 0;
        int temp = i;
        
        while(temp > 0) {              
            int digit = temp % 10;
            
            if(digit == 5) {
                hasfive = 1;
                break;
            }
            temp = temp / 10;
        }
        
        if(hasfive == 0) {
            sum = sum + i;                
        }
        
    }                                   

    printf("Сумма чисел от 1 до %d, не содержащих цифру 5: %d\n", N, sum);
    return 0;
}