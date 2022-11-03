#include<stdio.h>
	int main()
	{
	char lower,upper;
	
	printf("Enter your lower case Letter :");
	scanf("%c",&lower);
	
	upper = toupper(lower);
	
	printf("The upper case letter is : %c ",upper);
	
	
	}
