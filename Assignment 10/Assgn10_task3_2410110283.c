#include <stdio.h>

void selectionSort(int arr[], int n, int *swaps) {
    int min, j = 0;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (j = i; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        if (arr[i] != arr[min]) {
            *swaps += 1;
            arr[i] += arr[min];
            arr[min] = arr[i] - arr[min];
            arr[i] -= arr[min];
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int swaps = 0, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array: -\n");
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);
    selectionSort(arr, size, &swaps);
    printf("Sorted array: ");
    printArray(arr, size);
    printf("Swaps made: %d", swaps);
    return 0;
}
