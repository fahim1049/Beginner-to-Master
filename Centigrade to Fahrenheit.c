#include<stdio.h>
int main()
{
    float c,F;

    printf("Enter your Centi : ");
    scanf("%f", &c);

    F = (c * 1.8) + 32;

    printf("Fahrenheit : %.2f",F);

    return 0;
}
