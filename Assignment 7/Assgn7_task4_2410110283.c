#include <stdio.h>

int main() {
    int start, end, isPrime;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        if ((i == 0) || (i == 1))
            continue;
        isPrime = 1;
        for (int j = 2; j <= (i / 2); j++)
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        if (isPrime)
            printf("%d ", i);
    }
    printf("are the prime numbers between %d and %d.\n", start, end);
}
