#include <stdio.h>

int main() {
    int students = 1;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    float data[4][students];
    for (int i = 1; i <= students; i++) {
        printf("\nEnter details for Student %d\nWeight: ", i);
        scanf("%f", &data[0][i - 1]);
        printf("Height: ");
        scanf("%f", &data[1][i - 1]);
        data[2][i - 1] = data[0][i - 1] / (data[1][i - 1] * data[1][i - 1]);
        if ((18.5 <= data[2][i - 1]) && (data[2][i - 1] < 25))
            data[3][i - 1] = 1;
        else
            data[3][i - 1] = 0;
        printf("\n\n");
    }
    int student_no;
    printf("Enter desired student number to query: ");
    scanf("%d", &student_no);
    printf("Weight: %.2f\nHeight: %.2f\nBMI: %.2f\nBMI category: ",
           data[0][student_no - 1], data[1][student_no - 1],
           data[2][student_no - 1]);
    switch ((int)data[3][student_no - 1]) {
    case 0:
        printf("Mild Thinness\n");
        break;
    case 1:
        printf("Normal");
        break;
    case 2:
        printf("Overweight");
        break;
    case 3:
        printf("Inhuman Status");
        break;
    }
    for (int i = 1; i <= students; i++) {
        if (data[3][i - 1] == 1) {
            printf("Student %d is normal, and the details are as follows: "
                   "\nWeight: %f\n Height: %f\nBMI: %f\n",
                   i, data[0][i - 1], data[1][i - 1], data[2][i - 1]);
        }
    }
    return 0;
}
