#include <stdio.h>
/* #include <stdlib.h> */
/* #include <string.h> */

int main() {
    char *experience;
    printf("Write your first experience on the console\n");
    scanf("%s", experience);
    /* experience = realloc(experience, strlen(experience) + 1); */
    printf("\nMy experience as a college student are as follows:\n%s\n",
           experience);
    return 0;
}
