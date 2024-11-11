#include <stdio.h>

int linearSearch(int arr[], int n, int target, int *comparisons) {
    for (int i = 0; i < n; i++) {
        *comparisons += 1;
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int size, target, comparisons = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array: -\n");
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);
    printf("Enter the element to be found: ");
    scanf("%d", &target);
    printf("Element found at index: %d\nComparisons made: %d",
           linearSearch(arr, size, target, &comparisons), comparisons);
    return 0;
}
