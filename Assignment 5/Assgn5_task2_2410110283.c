#include <stdio.h>

int main() {
    int id, digitSum = 0;
    printf("Enter your student ID: ");
    scanf("%d", &id);
    while (id != 0) {
        digitSum += id % 10;
        id /= 10;
    }
    printf("You belong to Team ");
    if (!(digitSum % 3))
        printf("A");
    else if (!(digitSum % 5))
        printf("B");
    else if (!(digitSum % 7))
        printf("C");
    else
        printf("D");
    printf("!\n");
}
