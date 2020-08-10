/*
	Find the factorial of a number using function
*/

//created by akashbhalotia
#include<stdio.h>
int Fact(int N) //Function to compute factorial. 
{
	int factorial=1;

	for(int i=1;i<=N;i++)
		factorial*=i;

	return factorial;
}
int main()
{
	int N;

	printf("Enter a number\n");
	scanf("%d",&N);

	if(N<0)
		printf("Factorial is not defined for negative numbers\n");
	else
		printf("%d! = %d\n",N,Fact(N));

	return 0;
}
