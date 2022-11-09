#include<stdio.h>
int main()
{
    double num1,num2;
    char c;
    printf("Enter your Charecter: (+,-,*,%,/)\n :");
    scanf("%c",&c);


    printf("Enter your number \n:");
    scanf("%lf %lf",&num1,&num2);

    switch(c)
    {
    case '+':
        {
            printf("%.2lf",num1+num2);
            break;
        }

    case '-':
        {
            printf("%.2lf",num1-num2);
            break;
        }
    case '*':
        {
            printf("%.2lf",num1*num2);
            break;
        }
    case '/':
        {
            printf("%.2lf",num1/num2);
            break;
        }


    default:

        printf("Error,Please Try Again");
    }
getch();

}
