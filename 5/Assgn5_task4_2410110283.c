#include <math.h>
#include <stdio.h>

int main() {
    int number, reversedNum = 0, cubeDigitSum = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &number);
    int num = number;
    for (int i = 0; num != 0; i++) {
        reversedNum = reversedNum * 10 + num % 10;
        cubeDigitSum += powf(num % 10, 3);
        num /= 10;
    }
    if (reversedNum == number)
        printf("It is a palindrome number.\n");
    if (cubeDigitSum == number)
        printf("It is an Armstrong number.\n");
    int sumOfDivisors = 1;
    int prime = 1;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            sumOfDivisors += i;
            prime = 0;
        }
    }
    if (sumOfDivisors == number)
        printf("It is a perfect number.\n");
    if (prime)
        printf("It is a prime number.\n");
}
