#include <stdio.h>

int main() {
    char name[64];
    char roll[64];
    char dept[64];
    char school[64];
    char address[64];
    printf("Name: ");
    scanf("%s", name);
    printf("Roll No.: ");
    scanf("%s", roll);
    printf("Department: ");
    scanf("%s", dept);
    printf("School: ");
    scanf("%s", school);
    printf("Address: ");
    scanf("%s", address);
    printf("\nName: %s\n", name);
    printf("Roll No.: %s\n", roll);
    printf("Department: %s\n", dept);
    printf("School: %s\n", school);
    printf("Address: %s\n", address);
}
