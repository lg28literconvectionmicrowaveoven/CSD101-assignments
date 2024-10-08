#include <math.h>
#include <stdio.h>

int main() {
    char shape;
    float volume;
    printf("Enter shape that you want to build: "
           "([c]ube/[s]phere/c[u]boid/c[o]ne) ");
    scanf("\n%c", &shape);
    switch (shape) {
    case 'c':
        float side;
        printf("Enter side length: ");
        scanf("%f", &side);
        volume = powf(side, 3);
        break;
    case 's':
        float radius;
        printf("Enter radius length: ");
        scanf("%f", &radius);
        volume = (4.0 / 3.0) * M_PI * powf(radius, 3);
        break;
    case 'u':
        float length, breadth, height;
        printf("Enter cuboid length: ");
        scanf("%f", &length);
        printf("Enter cuboid breadth: ");
        scanf("%f", &breadth);
        printf("Enter cuboid height: ");
        scanf("%f", &height);
        volume = length * breadth * height;
        break;
    case 'o':
        float h, r;
        printf("Enter cone h: ");
        scanf("%f", &h);
        printf("Enter cone r: ");
        scanf("%f", &r);
        volume = (1.0 / 3.0) * M_PI * powf(r, 2) * h;
        break;
    default:
        printf("Invalid input.\n");
        return 0;
    }
    float clay;
    printf("How much clay do you have? ");
    scanf("%f", &clay);
    printf("You can make %d ", (int)(clay / volume));
    switch (shape) {
    case 'c':
        printf("cube");
        break;
    case 's':
        printf("sphere");
        break;
    case 'u':
        printf("cuboid");
        break;
    case 'o':
        printf("cone");
        break;
    }
    printf("(s) out of the amount of clay you have.\n");
    return 0;
}
