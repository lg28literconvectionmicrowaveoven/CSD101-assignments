#include <stdio.h>

int bSearch(int n, int *array, int start, int end) {
    int mid = (end - start) / 2;
    int el = array[start + mid];
    if (start == end)
        return -1;
    if (el > n)
        return bSearch(n, array, start, mid);
    else if (el == n)
        return start + mid;
    else
        return bSearch(n, array, mid, end);
}
int main() {
    int locations[11] = {2, 6, 9, 12, 23, 31, 44, 56, 72, 89, 97};
    int location;
    printf("Enter the potential location of the manuscript you want to search "
           "for: ");
    scanf("%d", &location);
    int answer = bSearch(location, locations, 0, 10) + 1;
    if (answer == -1) {
        printf("Alas! You could not find a manuscript at that location.\n");
        return 0;
    }
    printf("Success! You have found your manuscript at location: %d\n", answer);
    return 0;
}
