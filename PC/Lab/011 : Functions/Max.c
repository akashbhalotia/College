/*
	Find maximum of a given set of numbers using recursion.
	(Use a function Max and return the result to the main function.)
*/

//created by akashbhalotia
#include <stdio.h>
int max(int a, int b)
{
	return (a>b)?a:b;
}
int Max(int a[], int N)
{
	int i,ans=a[0];

	for(i=1;i<N;i++)
	{
		ans=max(ans,a[i]);
	}

	return ans;
}
int main()
{
	int i,N;

	printf("Enter size of array\n");
	scanf("%d",&N);

	int a[N];

	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}

	printf("Max value = %d\n",Max(a,N));

	return 0;
}
