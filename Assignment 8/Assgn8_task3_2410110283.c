#include <stdio.h>

int sum(int n1, int n2) {
    if (n1 == 0)
        return 0;
    else if (n1 == n2)
        return n1;
    else if (n1 > 1)
        return n1 + sum(n1 - 1, n2);
}

int main() {
    int lower, upper;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Sum of natural numbers from %d to %d is %d.\n", lower, upper,
           sum(upper, lower));
    return 0;
}
