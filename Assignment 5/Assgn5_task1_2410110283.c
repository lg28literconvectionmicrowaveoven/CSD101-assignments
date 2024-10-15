#include <stdio.h>

int main() {
    int students = 1;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    float weight, height, bmi;
    for (int i = 1; i <= students; i++) {
        printf("\nEnter details for Student %d\nWeight: ", i);
        scanf("%f", &weight);
        printf("Height: ");
        scanf("%f", &height);
        bmi = weight / (height * height);
        printf("Student %d BMI: %.2f\nBMI Category: ", i, bmi);
        if ((17 <= bmi) && (bmi < 18.5))
            printf("Mild Thinness");
        else if ((18.5 <= bmi) && (bmi < 25))
            printf("Normal");
        else if (bmi >= 25)
            printf("Overweight");
        else
            printf("Inhuman Status");
        printf("\n\n");
    }
}
