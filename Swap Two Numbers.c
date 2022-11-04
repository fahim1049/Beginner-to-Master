#include<stdio.h>
int main()
{
    int Number1 = 10;
    int Number2 = 30;

    int temp;

    temp = Number1;
    Number1 = Number2;
    Number2 = temp;

    printf("Number one is :%d\n",Number1);
    printf("Number two is :%d\n", Number2);

    return 0;

}
