#include <math.h>
#include <stdio.h>

int main() {
    float height, radius;
    printf("Enter the height of the cylinder (h): ");
    scanf("%f", &height);
    printf("Enter the radius of the cylinder (h): ");
    scanf("%f", &radius);
    printf("The surface area of the maximum size cone that can be inscribed in "
           "the cylinder is: %f\n",
           (22 * (radius * (radius + sqrt(pow(height, 2) + pow(radius, 2))))) /
               7);
    return 0;
}
