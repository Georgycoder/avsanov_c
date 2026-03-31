#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float calculate_area_by_value(struct Rectangle rect) {
    return rect.width * rect.height;
}

float calculate_perimeter_by_value(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}

float calculate_area_by_pointer(struct Rectangle *rect) {
    return rect->width * rect->height;
}

float calculate_perimeter_by_pointer(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}

int main() {
    struct Rectangle rect;
    
    printf("Ведите ширину прямоугольника: ");
    scanf("%f", &rect.width);
    printf("Введите высоту прямоугольника: ");
    scanf("%f", &rect.height);
    
    printf("\n По значению \n");
    printf("Площадь: %.2f\n", calculate_area_by_value(rect));
    printf("Периметр: %.2f\n", calculate_perimeter_by_value(rect));
    
    printf("\n По указателю \n");
    printf("Площадь: %.2f\n", calculate_area_by_pointer(&rect));
    printf("Периметр: %.2f\n", calculate_perimeter_by_pointer(&rect));
    
    return 0;
}