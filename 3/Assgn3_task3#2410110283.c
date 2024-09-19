#include <ctype.h>
#include <stdio.h>

int main() {
    float phy, math, chem, jee;
    char snusat;
    printf("Enter Physics score: ");
    scanf("%f", &phy);
    printf("Enter Mathematics score: ");
    scanf("%f", &math);
    printf("Enter Chemistry score: ");
    scanf("%f", &chem);
    float average = (phy + math + chem) / 3;
    printf("Your average score is %f\n", average);
    printf("Enter JEE score: ");
    scanf("%f", &jee);
    printf("Cleared SNUSAT? (y/n) ");
    scanf("\n%c", &snusat);
    snusat = tolower(snusat);
    printf("Eligibility: %d\n",
           (average > 90) && (jee > 98 || snusat == 'y') ? 1 : 0);
    return 0;
}
