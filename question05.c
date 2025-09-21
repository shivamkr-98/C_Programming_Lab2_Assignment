#include <stdio.h>

int main() {
    int a, b;
    double result;

    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);

    // without type casting (integer division)
    printf("a / b (integer division) = %d\n", a / b);

    // with type casting (converted to double)
    result = (double)a / b;
    printf("a / b (after type casting) = %lf\n", result);

    return 0;
}
