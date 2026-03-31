#include <stdio.h>

int main(){
    int N;
    printf("Введите число N ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        int hasthree = 0;
        int temp = i;

        while(temp > 0){
            int digit = temp % 10;
            if(digit == 3){
                hasthree = 1;
                break;
            }
            temp = temp / 10; 
        }
        if (hasthree == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}