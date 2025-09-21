#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d",&b);

    printf("Choose operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");   // %% lagana padta hai ek % print karne ke liye
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;
        case 5:
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulus by zero not allowed\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
