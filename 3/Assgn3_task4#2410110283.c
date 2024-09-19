#include <stdio.h>

int main() {
    int seconds_in_a_day = 60 * 60 * 24, days;
    printf("Enter number of days (N): ");
    scanf("%d", &days);
    printf("The amount of water wasted in %d days is: %f liters\n", days,
           (seconds_in_a_day * days * 0.000125));
}
