#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Enter weight: ");
    scanf("%f", &weight);
    printf("Enter height: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    if ((17 <= bmi) && (bmi < 18.5))
        printf("Mild Thinness");
    else if ((18.5 <= bmi) && (bmi < 25))
        printf("Normal");
    else if (25 <= bmi)
        printf("Overweight");
    else
        printf("Inhuman Status");
    printf("\n");
    return 0;
}
