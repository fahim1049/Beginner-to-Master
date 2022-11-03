#include<stdio.h>
int main ()
{
	double a,b,c,aria,s;
	printf("Enter three input : ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	s = a+b+c/2;
	
	aria = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Aria of tringle : %.2lf",aria);
	
	
	return 0;
}
