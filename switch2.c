#include<stdio.h>
int main()
{
    int choice;
    float f,c,fahren,celcius;

    printf("Menu Based Temperature conversion\n");
    printf("1.Fahrenheit to celcius\n");
    printf("2.Celcius to Fahrenheit\n");
    printf("Enter your Choice\n :");
    scanf("%d",&choice);



    switch(choice)

    {


    case 1:
        {
            printf("Enter the Fahrenheit Temperature :");
            scanf("%f",&f);
            celcius =(f-32)/1.8;
            printf("Celcius :%f\n",celcius);
            break;

            }


    case 2:

        {
            printf("Enter the Celcius Temperature :");
            scanf("%f",&c);
            fahren =(c*1.8)+32;
            printf("Fahrenhite :%f\n",fahren);
            break;


        }



    default:

        printf("Error, Please Try Again!");
}

    return 0;


}













