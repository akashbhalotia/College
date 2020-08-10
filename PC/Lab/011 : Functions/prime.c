/*
	Check whether the given number is prime or not. Using this function, 
	generate first n prime numbers.
*/

//created by akashbhalotia
#include <stdio.h>
int isPrime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
			c++;
	}
	
	if(c==2)
		return 1;

	return 0;
}
int main()
{
	int i,N,count=0;

	printf("Enter the value of N\n");
	scanf("%d",&N);

	for(i=1;count<N;i++)
	{
		if(isPrime(i))
		{
			count++;
			printf("%d,",i);
		}
	}

	return 0;
}
