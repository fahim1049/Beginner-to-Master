#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the power of x :");
    scanf("%d",&x);

    printf("Enter the power of y :");
    scanf("%d",&y);

    double  p = pow(x,y);

    printf("Result is :%.2lf",p);

    return 0;


}
