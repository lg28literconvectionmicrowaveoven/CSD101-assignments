#include <math.h>
#include <stdio.h>

int add(int n1, int n2) { return n1 + n2; }

int subtract(int n1, int n2) { return n1 - n2; }

int multiply(int n1, int n2) { return n1 * n2; }

int divide(int n1, int n2) { return n1 / n2; }

int power(int n1, int n2) { return powf(n1, n2); }

int main() {
    int first, second;
    char operator;
    int (*func[5])(int, int) = {add, subtract, multiply, divide, power};
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf("\n%c", &operator);
    printf("Result: ");
    switch (operator) {
    case '+':
        printf("%d", (*func[0])(first, second));
        break;
    case '-':
        printf("%d", (*func[1])(first, second));
        break;
    case '*':
        printf("%d", (*func[2])(first, second));
        break;
    case '/':
        printf("%d", (*func[3])(first, second));
        break;
    case '^':
        printf("%d", (*func[4])(first, second));
        break;
    default:
        printf("Operation not valid.\n");
        return 0;
    }
    printf("\n");
    return 0;
}
