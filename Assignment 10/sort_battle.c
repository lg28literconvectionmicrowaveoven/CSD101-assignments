#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int min, j = 0;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (j = i; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        if (arr[i] != arr[min]) {
            arr[i] += arr[min];
            arr[min] = arr[i] - arr[min];
            arr[i] -= arr[min];
        }
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    int j = 0, tmp;
    for (int i = 1; i < n; i++) {
        j = i - 1;
        tmp = arr[i];
        while (j >= 0 && tmp <= arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = tmp;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to generate an array of random integers
void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Random integers between 0 and 99
    }
}

int main() {
    srand(time(NULL)); // Seed for random number generation

    int n = 100; // Change the size of the array for different tests ... keep it
                 // as 10, 100, 1000, 10000
    int arr[n];

    // Generate random array
    generateRandomArray(arr, n);

    // Copy the array for sorting with the other method
    int arrForSelection[n];
    for (int i = 0; i < n; i++) {
        arrForSelection[i] = arr[i];
    }

    // Measure time for Selection Sort
    clock_t start = clock();
    selectionSort(arrForSelection, n);
    clock_t end = clock();
    double selectionSortTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Selection Sort Time: %.6f seconds\n", selectionSortTime);
    printArray(arrForSelection, n);

    // Measure time for Insertion Sort
    clock_t startInsertion = clock();
    insertionSort(arr, n);
    clock_t endInsertion = clock();
    double insertionSortTime =
        ((double)(endInsertion - startInsertion)) / CLOCKS_PER_SEC;
    printf("Insertion Sort Time: %.6f seconds\n", insertionSortTime);
    // printArray(arr, n);
    return 0;
}
