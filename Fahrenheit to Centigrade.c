#include<stdio.h>
int main()
{
    float C,f;

    printf("Enter your Fahren : ");
    scanf("%f", &f);

    C = (f-32)/1.8;

    printf("Centigrade : %.2f",C);

    return 0;
}

