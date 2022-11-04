#include<stdio.h>
    int main()
    {
        float radius,area,PI=3.1416;

        printf("Enter your radius :");
        scanf("%f",&radius);

        area =PI*radius*radius;

        printf("Area of Circle :%.2f", area);

        return 0;
    }
