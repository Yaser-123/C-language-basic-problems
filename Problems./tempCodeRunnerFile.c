#include <stdio.h>
#include <math.h>

int main() {
    double a = 3.0;
    double b = 7.0;
    double c = 9.0;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Root: %lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
