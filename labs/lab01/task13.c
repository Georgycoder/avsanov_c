#include <stdio.h>

int main() {
    int seconds;
    
    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &seconds);
    
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;
    
    printf("%02d:%02d:%02d\n", hours, minutes, secs);
    
    return 0;
}