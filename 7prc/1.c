#include <stdio.h>

int main()
{
    int size1;
    int size2;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 1, 5};
    int result[10];
    int count = alike(arr1, arr2, result, size1, size2);

    printf("Одинаковые элементы массива: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n ", result[i]);
    }
    
    return 0;
}


int alike(int arr1[], int arr2[], int size1, int size2, int result[]){
    int count = 0;
    int alrExist = 0;

    for (int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[i]) {
                for(int k = 0; k < count; k++) {
                    if (result[k] == arr1[i]) {
                        alrExist = 1;
                        break;
                    }
                }
            }
            
        }
        if (alrExist != 1) {    
        result[count] = arr1[i];
        count++;
    }
    break;
    }
    return count;
}