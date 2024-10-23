#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    else if (n > 1)
        return fib(n - 2) + fib(n - 1);
}

int sum(int n) {
    if (n == 0)
        return 0;
    if (n > 1)
        return fib(n) + sum(n - 1);
}

int main() {
    int month;
    printf("Enter month number to calculate savings (starting from 0): ");
    scanf("%d", &month);
    printf("For month %d, you will save: %d\n", month, fib(month) * 10);
    printf("Your total savings after %d months will be %d.\n", month,
           sum(month) * 10);
    return 0;
}
