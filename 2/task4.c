#include <stdio.h>

int main() {
    float celsius;
    printf("Temperature in Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9 / 5 + 32;
    float kelvin = celsius + 273.15;
    printf("\nTemperature in Fahrenheit: %f\n", fahrenheit);
    printf("Temperature in Kelvin: %f\n", kelvin);
    return 0;
}
