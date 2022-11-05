#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter number one :");
    scanf("%d",&num1);

    printf("Enter number two :");
    scanf("%d",&num2);

    if(num1>num2){

        printf("Number one is big");
        printf("and number two is small\n");
    }
    else if (num1<num2){


        printf("Number two is big ");
        printf("and Number one is small\n");
    }

        else if(num1 == num2)

            printf("This number is Equation");


        return 0;
}
