// Compute the sum of all elements stored in an array using pointers

//created by akashbhalotia
#include <stdio.h>
int main()
{
	int a[100],N,i,sum=0;
	int *p=a;
	
	printf("Enter the length of the array\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",(p+i));
	}
	
	for(i=0;i<N;i++)
		sum+=*(p+i);
		
	printf("Sum = %d\n",sum);
	
	return 0;
}
