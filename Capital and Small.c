#include<stdio.h>
int main()
{
    char c;
    printf("Enter Your Char:");
    scanf("%c",&c);
    if(c>='a' && c<='z')

        printf("Letter is Small");

    else if(c>='A' && c<='Z')

        printf("Letter is Capital");

        else
            printf("Error, Please Try Again");

        return 0;
}
