#include <stdio.h>

int main() {
    float average;
    printf("Enter average score: ");
    scanf("%f", &average);
    switch ((((int)average) + 5) / 10) {
    case 10:
    case 9:
        printf("Your grade is A");
        break;
    case 8:
        printf("Your grade is B");
        break;
    case 7:
        printf("Your grade is C");
        break;
    case 6:
        printf("Your grade is D");
        break;
    case 4:
        printf("Your grade is E");
        break;
    case 5:
    case 3:
        switch (((int)average) / 10) {
        case 5:
            printf("Your grade is D");
            break;
        case 4:
            printf("Your grade is E");
            break;
        case 3:
            printf("Your grade is E");
            break;
        case 2:
            printf("Your grade is F");
            break;
        }
        break;
    case 2:
    case 1:
    case 0:
        printf("Your grade is F");
        break;
    default:
        printf("Invalid score");
        break;
    }
    printf(".\n");
}
