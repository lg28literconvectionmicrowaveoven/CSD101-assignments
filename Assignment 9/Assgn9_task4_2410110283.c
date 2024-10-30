#include <stdio.h>

int main() {
    char str[50];
    printf("Enter string: ");
    scanf(" %[^\n]", str);
    int i = 0;
    while (*(str + i) != '\0')
        i++;
    printf("String length is: %d.\n", i);
    return 0;
}
