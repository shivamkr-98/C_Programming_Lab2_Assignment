#include <stdio.h>
#include <math.h>

int main(void) {
    double x, angle_deg, rad, pi;
    /* compute pi reliably */
    pi = acos(-1.0);

    printf("Enter a real number x (for functions like log, sqrt, pow): ");
    if (scanf("%lf", &x) != 1) {
        fprintf(stderr, "Invalid input. Exiting.\n");
        return 1;
    }

    printf("\nUsing x = %g (note: trig functions expect radians)\n\n", x);

    printf("sin(x)   = %g\n", sin(x));
    printf("cos(x)   = %g\n", cos(x));
    printf("tan(x)   = %g\n", tan(x));
    if (x > 0.0)
        printf("log(x)   = %g  (natural log)\n", log(x));
    else
        printf("log(x)   = NaN or domain error (x must be > 0)\n");

    printf("log10(x) = %g\n", (x > 0.0) ? log10(x) : NAN);

    if (x >= 0.0)
        printf("sqrt(x)  = %g\n", sqrt(x));
    else
        printf("sqrt(x)  = NaN or domain error (x must be >= 0)\n");

    printf("pow(x,3) = %g\n", pow(x, 3.0));
    printf("fabs(x)  = %g\n", fabs(x));

    printf("\nNow enter an angle in degrees to try trig functions: ");
    if (scanf("%lf", &angle_deg) != 1) {
        fprintf(stderr, "Invalid input for angle. Exiting.\n");
        return 1;
    }
    rad = angle_deg * (pi / 180.0);
    printf("sin(%.6f deg) = %g\n", angle_deg, sin(rad));
    printf("cos(%.6f deg) = %g\n", angle_deg, cos(rad));

    return 0;
}
