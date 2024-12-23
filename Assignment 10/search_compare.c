#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10000

// Function to generate a sorted array of random integers
void generateSortedArray(int arr[], int n) {
    int i = 0, j = 0, max, swap;
    for (i = 0; i < n; i++)
        arr[i] = rand() % 10000; // Random numbers between 0 and 9999

    // Sort the array using simple Bubble Sort for ensuring it's sorted
    // TODO - Insert code here
    for (i = 0; i < n - 1; i++) {
        max = 0;
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[max])
                max = j;
        for (; max < n - i - 1; max++)
            if (arr[max + 1] < arr[max]) {
                swap = arr[max];
                arr[max] = arr[max + 1];
                arr[max + 1] = swap;
            }
    }
}

// Linear Search function
int linearSearch(int arr[], int n, int target) {

    // TODO - Insert code here
    for (int i = 0; i < n; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

// Binary Search function
int binarySearch(int arr[], int left, int right, int target) {

    // TODO - Insert code here
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] > target)
            right = mid - 1;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE];
    int n;
    int target;

    // Set the size of the array
    printf("Enter the number of elements (up to 10000): ");
    scanf("%d", &n);
    if (n > MAX_SIZE) {
        printf("Error: Maximum size exceeded.\n");
        return 1;
    }

    // Generate a sorted array
    generateSortedArray(arr, n);

    // Get target value from user
    printf("Enter the target value to search: ");
    scanf("%d", &target);

    // Measure time for Linear Search
    clock_t start = clock();
    int linearIndex = linearSearch(arr, n, target);
    clock_t end = clock();
    double linearSearchTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Measure time for Binary Search
    start = clock();
    int binaryIndex = binarySearch(arr, 0, n - 1, target);
    end = clock();
    double binarySearchTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Print results
    if (linearIndex != -1) {
        printf("Linear Search: Found at index %d\n", linearIndex);
    } else {
        printf("Linear Search: Not found\n");
    }
    printf("Time taken for Linear Search: %f seconds\n", linearSearchTime);

    if (binaryIndex != -1) {
        printf("Binary Search: Found at index %d\n", binaryIndex);
    } else {
        printf("Binary Search: Not found\n");
    }
    printf("Time taken for Binary Search: %f seconds\n", binarySearchTime);

    return 0;
}
