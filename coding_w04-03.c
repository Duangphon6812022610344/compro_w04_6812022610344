#include <stdio.h>

int main() {
    char nameInitial = 'D';
    int age = 18;
    float weight = 42.1;
    char gender[] = "Female";

    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Gender: %s\n", gender);

    return 0; 
}