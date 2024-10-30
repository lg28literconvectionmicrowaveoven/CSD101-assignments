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
    int element;
    printf("Enter element to count occurrences of: ");
    scanf("%d", &element);
    int el, max = 0, sum = 0, count = 0;
    printf("The reversed array is: {");
    for (i = 0; i < size; i++) {
        el = *(array + i);
        printf("%d", el);
        if (i < (size - 1))
            printf(", ");
        if (el > max)
            max = el;
        if (el == element)
            count++;
        sum += el;
    }
    printf("}\nThe maximum element in the array is: %d.\nThe sum of all "
           "elements in the array is: %d.\nThe number of occurrences of %d is: "
           "%d.\n",
           max, sum, element, count);
    return 0;
}
