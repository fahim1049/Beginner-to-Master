#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2;

    printf("Enter three value:");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = sqrt(b*b-4*a*c);

    x1= (-b+d)/2*a;
    x2= (-b-d)/2*a;

    printf("Equation of x1 ia : %lf\n",x1);
    printf("Equation of x2 is : %lf\n",x2);

    return 0;
}
