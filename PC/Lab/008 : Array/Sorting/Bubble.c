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

	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}

	printf("\nSorted Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");
	
	return 0;
}
