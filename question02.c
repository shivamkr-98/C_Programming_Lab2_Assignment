#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    double a, b, c;        // coefficients of quadratic equation
    double discriminant;   // D = b^2 - 4ac
    double root1, root2;   // the two roots

    // Input values
    printf("Let a quadratic Equation be ax^2+bx+c=0\n"); 
    printf("Enter coefficients of a: ");
    scanf("%lf", &a);
    printf("Enter coefficients of b: ");
    scanf("%lf", &b);
    printf("Enter coefficients of c: ");
    scanf("%lf", &c);

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    if (discriminant >= 0) {
        // roots when D >= 0
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else {
        printf("Discriminant is negative. Roots are imaginary.\n");
    }

    return 0;
}
