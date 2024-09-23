#include <stdio.h>

int main() {
    char assignment;
    printf("Have I completed my assignments? (y/n) ");
    scanf("%c", &assignment);
    if (assignment == 'y') {
        char rain;
        printf("Is it raining? (y/n) ");
        scanf("\n%c", &rain);
        if (rain == 'y')
            printf("I'll watch a movie.");
        else if (rain == 'n')
            printf("I'll hang out with friends.");
        else
            printf("Invalid input.");
    } else if (assignment == 'n')
        printf("I'll study.");
    printf("\n");
    return 0;
}
