#include <stdio.h>

int main() {
    float scores[7];
    float highest, lowest, average, threshold;
    int belowThreshold;
    printf("Enter threshold: ");
    scanf("%f", &threshold);
    for (int i = 0; i < 7; i++) {
        printf("Enter marks for course %d: ", i + 1);
        scanf("%f", &scores[i]);
        if (scores[i] > highest)
            highest = scores[i];
        if (scores[i] < lowest)
            lowest = scores[i];
        if (scores[i] <= threshold)
            belowThreshold++;
        average += scores[i];
    }
    average /= 7;
    printf("Your highest score is: %.2f\nYour lowest score is: %.2f\nYour "
           "average score is: %.2f\nYour grade is: ",
           highest, lowest, average);
    if (average >= 85)
        printf("A");
    else if ((85 > average) && (average >= 75))
        printf("B");
    else if ((75 > average) && (average >= 65))
        printf("C");
    else if ((65 > average) && (average >= 50))
        printf("D");
    else if ((50 > average) && (average >= 30))
        printf("E");
    else if (average < 30)
        printf("F");
    printf("\nNumber of courses with scores on or below threshold value: %d",
           belowThreshold);
    return 0;
}
