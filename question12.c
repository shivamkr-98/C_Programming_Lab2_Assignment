#include <stdio.h>
int main()
{
    int jobno, level;
    float basic, hra, perks, gross, tax, net;

    printf("enter job number: ");
    scanf("%d", &jobno);
    printf("enter level number (1-4): ");
    scanf("%d", &level);
    printf("enter basic pay: ");
    scanf("%f", &basic);

    hra = 0.25 * basic;

    // perks depend on level
    if (level == 1)
        perks = 1000;
    else if (level == 2)
        perks = 750;
    else if (level == 3)
        perks = 500;
    else
        perks = 250;

    gross = basic + hra + perks;

    // tax depends on gross
    if (gross > 4000)
        tax = 0.10 * gross;
    else if (gross > 3000)
        tax = 0.05 * gross;
    else
        tax = 0;

    net = gross - tax;

    printf("Job no: %d\nLevel: %d\nBasic: %.2f\nGross: %.2f\nTax: %.2f\nNet: %.2f\n",
           jobno, level, basic, gross, tax, net);

    return 0;
}
