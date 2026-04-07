#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int year;
    float price;
};

int main() {
    struct Book *books;
    int n;
    
    printf("Введите количество книг: ");
    scanf("%d", &n);
    
    books = (struct Book*)malloc(n * sizeof(struct Book));
    
    if(books == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        printf("\nКнига %d:\n", i+1);
        
        printf("Введите название: ");
        scanf(" %[^\n]", books[i].title);
        
        printf("Введите автора: ");
        scanf(" %[^\n]", books[i].author);
        
        printf("Введите год издания: ");
        scanf("%d", &books[i].year);
        
        printf("Введите цену: ");
        scanf("%f", &books[i].price);
    }
    free(books);
    books = NULL;
    
    return 0;
}