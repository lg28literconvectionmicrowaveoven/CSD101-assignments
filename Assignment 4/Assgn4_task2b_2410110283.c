#include <stdio.h>

int main() {
    char assignment;
    printf("Have I completed my assignments? (y/n) ");
    scanf("%c", &assignment);
    switch (assignment) {
    case 'y':
        char rain;
        printf("Is it raining? (y/n) ");
        scanf("\n%c", &rain);
        switch (rain) {
        case 'y':
            printf("I'll watch a movie.");
            break;
        case 'n':
            printf("I'll hang out with friends.");
            break;
        default:
            printf("Invalid input.");
        }
        break;
    case 'n':
        printf("I'll study.");
        break;
    default:
        printf("Invalid input.");
    }
    printf("\n");
    return 0;
}
