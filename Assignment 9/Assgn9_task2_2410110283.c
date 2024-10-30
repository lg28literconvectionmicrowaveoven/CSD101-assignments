#include <stdio.h>

int main() {
    int i = 0;
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter array elements:-\n");
    for (; i < size; i++)
        scanf("%d", array + i);
    for (i = 0; i < (size / 2); i++) {
        *(array + i) += *(array + (size - 1 - i));
        *(array + (size - 1 - i)) = *(array + i) - *(array + (size - 1 - i));
        *(array + i) -= *(array + (size - 1 - i));
    }
    int max = 0;
    printf("The reversed array is: {");
    for (i = 0; i < size; i++) {
        printf("%d", *(array + i));
        if (i < (size - 1))
            printf(", ");
        if (*(array + i) > max)
            max = *(array + i);
    }
    printf("}\nThe maximum element in the array is: %d.\n", max);
    return 0;
}
