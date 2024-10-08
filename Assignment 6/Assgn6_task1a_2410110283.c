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
        if ((17 <= data[2][i - 1]) && (data[2][i - 1] < 18.5))
            data[3][i - 1] = 0;
        else if ((18.5 <= data[2][i - 1]) && (data[2][i - 1] < 25))
            data[3][i - 1] = 1;
        else if (data[2][i - 1] >= 25)
            data[3][i - 1] = 2;
        else
            data[3][i - 1] = 3;
        printf("\n");
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
    printf("\n");
    return 0;
}
