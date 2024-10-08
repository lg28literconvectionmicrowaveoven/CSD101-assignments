#include <stdio.h>

void print_decoration(int n, char char1, char char2) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (n - i); j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            if ((j % 2) == 0)
                printf("%c", char2);
            else
                printf("%c", char1);
        printf("\n");
    }
}

int main() {
    int size;
    char char1, char2;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter characters you want to alternate: ");
    scanf("\n%c", &char1);
    scanf("\n%c", &char2);
    print_decoration(size, char1, char2);
    return 0;
}
