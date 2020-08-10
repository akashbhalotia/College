//created by akashbhalotia
#include<stdio.h>

int main()
{
	int N;

	printf("Enter a number\n");
	scanf("%d",&N);

	if(N<0)
		N*=-1;

	printf("Absolute value = %d\n",N);

	return 0;
}
