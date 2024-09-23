#include <stdio.h>

int main() {
    float average;
    printf("Enter average score: ");
    scanf("%f", &average);
    if (average < 0)
        printf("Invalid score");
    else if (average >= 85)
        printf("Your grade is A");
    else if ((75 <= average) && (average < 85))
        printf("Your grade is B");
    else if ((65 <= average) && (average < 75))
        printf("Your grade is C");
    else if ((50 <= average) && (average < 65))
        printf("Your grade is D");
    else if ((30 <= average) && (average < 50))
        printf("Your grade is E");
    else if (average < 30)
        printf("Your grade is F");
    else
        printf("Invalid score");
    printf(".\n");
}
