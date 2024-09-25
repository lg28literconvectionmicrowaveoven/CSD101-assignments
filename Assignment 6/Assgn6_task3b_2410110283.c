#include <stdio.h>

int main() {
    float scores[2][7];
    for (int j = 0; j < 2; j++) {
        printf("Enter marks for Quiz %d", j + 1);
        for (int i = 0; i < 7; i++) {
            printf("\tEnter marks for course %d: ", i + 1);
            scanf("%f", &scores[j][i]);
        }
    }
    printf("The best of the two quizzes is: ");
    for (int i = 0; i < 7; i++) {
        printf("\tCourse %d: %f", i + 1,
               (scores[0][i] >= scores[1][i]) ? scores[0][i] : scores[1][i]);
    }
    printf("\n");
    return 0;
}
