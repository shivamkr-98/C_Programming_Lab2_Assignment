#include <stdio.h>

int main() {
    int days;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 5) {
        printf("Fine = 0.50 Rupees\n");
    }
    else if (days <= 10) {
        printf("Fine = 1 Rupee\n");
    }
    else if (days <= 30) {
        printf("Fine = 5 Rupees\n");
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
