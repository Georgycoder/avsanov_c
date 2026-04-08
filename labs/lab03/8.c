#include <stdio.h>
#include <stdlib.h>

struct DynamicArray {
    int *data;
    int size;
};

void add_element(struct DynamicArray *arr, int value) {
    int *tmp;
    arr->size++;
    tmp = (int*)realloc(arr->data, arr->size * sizeof(int));
    if(tmp == NULL) {
        printf("Ошибка памяти\n");
        arr->size--;
        return;
    }
    arr->data = tmp;
    arr->data[arr->size - 1] = value;
    printf("Добавлено %d\n", value);
}

void delete_element(struct DynamicArray *arr, int index) {
    int *tmp;
    if(index < 0 || index >= arr->size) {
        printf("Неверный индекс\n");
        return;
    }
    
    for(int i = index; i < arr->size - 1; i++) {
        arr->data[i] = arr->data[i + 1];
    }
    
    arr->size--;
    tmp = (int*)realloc(arr->data, arr->size * sizeof(int));
    if(tmp == NULL && arr->size > 0) {
        printf("Ошибка памяти\n");
        arr->size++;
        return;
    }
    arr->data = tmp;
    printf("Удалено\n");
}

void print_list(struct DynamicArray *arr) {
    if(arr->size == 0) {
        printf("Список пуст\n");
        return;
    }
    printf("Список: ");
    for(int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

int main() {
    struct DynamicArray arr;
    arr.data = NULL;
    arr.size = 0;
    
    int choice, value, index;
    
    do {
        printf("\n1. Добавить\n");
        printf("2. Удалить по индексу\n");
        printf("3. Вывести\n");
        printf("4. Выход\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            printf("Значение: ");
            scanf("%d", &value);
            add_element(&arr, value);
        }
        else if(choice == 2) {
            if(arr.size == 0) {
                printf("Список пуст\n");
            } else {
                printf("Индекс (0-%d): ", arr.size-1);
                scanf("%d", &index);
                delete_element(&arr, index);
            }
        }
        else if(choice == 3) {
            print_list(&arr);
        }
        else if(choice == 4) {
            if(arr.data != NULL) {
                free(arr.data);
            }
            printf("До свидания\n");
        }
        else {
            printf("Неверный выбор\n");
        }
    } while(choice != 4);
    
    return 0;
}