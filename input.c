#include <stdio.h>
#include <string.h>

void input(char *buf, char *prompt, int num) {
    printf("%s", prompt);
    fgets(buf, num + 1, stdin);
    if (!strchr(buf, '\n'))
        while (getchar() != '\n')
            ;
}
