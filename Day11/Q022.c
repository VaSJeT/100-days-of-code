#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percent;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit percentage = %.2f%%", percent);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss percentage = %.2f%%", percent);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}