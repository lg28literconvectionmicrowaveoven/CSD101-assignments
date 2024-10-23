#include <stdio.h>

int fact(int n) {
    if (n < 2)
        return 1;
    else if (n > 1)
        return n * fact(n - 1);
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Factorial of the number is: %d\n", fact(num));
    return 0;
}
