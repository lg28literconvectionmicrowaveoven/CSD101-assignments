#include <stdio.h>

void print_decoration(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < (n - i); j++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            if ((j % 2) == 0)
                printf("~");
            else
                printf("*");
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    print_decoration(size);
    return 0;
}
