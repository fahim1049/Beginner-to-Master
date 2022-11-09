#include<stdio.h>
int main()
{
    char c;
    printf("Enter your char :");
    scanf("%c",&c);

    switch(c)
{


      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':


      printf("Vowel\n");

      default:

        printf("Consonant");

}
        return 0;





}
