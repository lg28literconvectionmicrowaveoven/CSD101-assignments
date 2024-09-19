#include <ctype.h>
#include <stdio.h>

int moveBox(int boxNumber, int bookFound) {
    printf("Moving box %d: \n", boxNumber);
    char isBook;
    for (int i = 1; i <= 3; i++) {
        printf("\tItem %d\n", i);
        if (!bookFound) {
            printf("\tIs it a book? (y/n) ");
            scanf("\n%c", &isBook);
            isBook = tolower(isBook);
            if (isBook == 'y') {
                printf("\t\tYay I found the book!\n");
                bookFound = 1;
            } else if (isBook != 'n')
                printf("Invalid input.\n");
        }
    }
    return bookFound;
}

int main() {
    int bookFound = 0;
    int boxNumber;
    char amILousy;
    printf("Do you know how many boxes you have (y/n): ");
    scanf("\n%c", &amILousy);
    switch (tolower(amILousy)) {
    case 'y':
        printf("Enter number of boxes: ");
        scanf("%d", &boxNumber);
        for (int i = 1; i <= boxNumber; i++) {
            bookFound = moveBox(i, bookFound);
        }
        break;
    case 'n':
        char done = 'n';
        int i = 1;
        while (done == 'n') {
            bookFound = moveBox(boxNumber, bookFound);
            printf("Done moving? (y/n)");
            scanf("\n%c", &done);
            done = tolower(done);
            if (done == 'y')
                break;
            i++;
        }
        printf("Finall, I'm done!");
        break;
    }
}
