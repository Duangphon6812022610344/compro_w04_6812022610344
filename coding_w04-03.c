#include <stdio.h>

int main() {
    char nameInitial = 'D'; // ประเภทอักขระ
    int age = 18; // ประเภทจำนวนเต็ม
    float weight = 42.1; // ประเภททศนิยม
    char gender[] = "Female"; // ประเภทอักขระ

    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Gender: %s\n", gender);

    return 0; 
}