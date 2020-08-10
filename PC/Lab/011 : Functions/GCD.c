/*
	Find GCD of two numbers recursively
*/

//created by akashbhalotia
#include <stdio.h>

int gcd(int a, int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main()
{
	int g,a,b;

	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);

	if(a<=0||b<=0)
	{
		printf("Invalid Input\n");
		return 0;
	}

	g=gcd(a,b);
	printf("GCD = %d\n",g);

	return 0;
}
