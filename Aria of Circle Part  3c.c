
#include<stdio.h>
#include<math.h>
    int main()
    {
        float radius,area;

        printf("Enter your radius :");
        scanf("%f",&radius);

        area =M_PI*radius*radius;

        printf("Area of Circle :%.2f", area);

        return 0;
    }
