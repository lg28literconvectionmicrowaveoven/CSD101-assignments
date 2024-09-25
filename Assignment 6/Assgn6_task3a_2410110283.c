#include <stdio.h>

int main() {
    float scores[7];
    for (int i = 0; i < 7; i++) {
        printf("Enter marks for course %d: ", i + 1);
        scanf("%f", &scores[i]);
    }
    float search;
    int searchResults[7] = {0, 0, 0, 0, 0, 0, 0}, searchNum;
    printf("Enter score that you're searching for: ");
    scanf("%f", &search);
    for (int i = 0; i < 7; i++) {
        searchResults[i] = search == scores[i];
        searchNum += 1;
    }
    if (searchNum > 0) {
        printf("Yes, you have scored that in ");
        for (int i = 0; i < 7; i++) {
            if (searchResults[i]) {
                printf("course %d", i + 1);
                if (searchNum > 1)
                    printf(", ");
                else
                    break;
            }
        }
    } else
        printf("Nope, you have not scored that in any of the courses");
    printf(".\n");
    return 0;
}
