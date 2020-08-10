//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,j,tmp;

	printf("Enter number of elements in the array\n");
	scanf("%d",&N);

	int a[N];

	for(i=0;i<N;i++)
	{		
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}

	printf("\nOriginal Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");

	for(i=0;i<N/2;i++)
	{
		tmp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=tmp;
	}

	printf("\nReversed Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");
	
	return 0;
}
