#include <stdio.h>

void compute_bmi(int n, float *weight, float *height, float *bmi) {
    float w, h;
    for (int i = 0; i < n; i++) {
        w = *(weight + i);
        h = *(height + i);
        *(bmi + i) = w / (h * h);
    }
}

void print_bmi_details(int std_id, float *weight, float *height, float *bmi) {
    float w = *(weight + (std_id - 1));
    float h = *(height + (std_id - 1));
    float BMI = *(bmi + (std_id - 1));
    printf("Weight: %.2f\nHeight: %.2f\nBMI: %.2f\nBMI category: ", w, h, BMI);
    if ((17 <= BMI) && (BMI < 18.5))
        printf("Mild Thinness");
    else if ((18.5 <= BMI) && (BMI < 25))
        printf("Normal");
    else if (BMI >= 25)
        printf("Overweight");
    else
        printf("Inhuman Status");
    printf("\n");
}

int main() {
    int students;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    float data[3][students];
    for (int i = 1; i <= students; i++) {
        printf("\nEnter details for Student %d\nWeight: ", i);
        scanf("%f", &data[0][i - 1]);
        printf("Height: ");
        scanf("%f", &data[1][i - 1]);
        printf("\n");
    }
    compute_bmi(students, data[0], data[1], data[2]);
    for (int i = 1; i <= students; i++) {
    }
    int student_no;
    printf("Enter desired student number to query: ");
    scanf("%d", &student_no);
    print_bmi_details(student_no, data[0], data[1], data[2]);
    return 0;
}
