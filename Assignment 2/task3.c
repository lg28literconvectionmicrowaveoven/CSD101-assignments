#include <stdio.h>

int main() {
    float weight;
    float height;
    printf("Weight: ");
    scanf("%f", &weight);
    printf("Height: ");
    scanf("%f", &height);
    float height2 = height * height;
    printf("\nBMI: %f\n", (weight / height2));
}
