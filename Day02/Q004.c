#include <stdio.h>

int main()
{
    float r, cir, area, pi = 3.14;

    printf("area and circumfarence of circle\n");
    printf("tell the area =");
    scanf("%f", &r);
    cir = 2 * pi * r;
    printf("circumference of circle= %.2f\n", cir);
    area = pi * r * r;
    printf("area of circle= %.2f", area);

    return 0;
}