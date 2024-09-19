#include <stdio.h>

int main() {
    float mohan, hari, charu, ishika;
    printf("Enter Mohan's BMI: ");
    scanf("%f", &mohan);
    printf("Enter Hari's BMI: ");
    scanf("%f", &hari);
    printf("Enter Charu's BMI: ");
    scanf("%f", &charu);
    printf("Enter Ishika's BMI: ");
    scanf("%f", &ishika);
    float mh = mohan + hari;
    float ci = charu + ishika;
    printf("The comparison score for > operator is %d\n", mh > ci);
    printf("The comparison score for = operator is %d\n", mh == ci);
    printf("The comparison score for < operator is %d\n", mh < ci);
    return 0;
}
