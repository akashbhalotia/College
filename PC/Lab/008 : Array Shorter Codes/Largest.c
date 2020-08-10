/*
	Find the largest and smallest element in an array
*/

//created by akashbhalotia
#include <stdio.h>
int max(int a, int b){return (a>b)?a:b;}
int min(int a, int b){return (a<b)?a:b;}
int main()
{
	int a[100],i,N,large,small;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	large=small=a[0];
	
	for(i=1;i<N;i++)
	{
		large=max(large,a[i]);
		small=min(small,a[i]);
	}
	
	printf("Largest element = %d\n",large);
	printf("Smallest element = %d\n",small);
	
	return 0;
}
