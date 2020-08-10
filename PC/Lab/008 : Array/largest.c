//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,max,min;

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

	max=min=a[0];

	for(i=1;i<N;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}

	printf("Largest element = %d\n",max);
	printf("Smallest element = %d\n",min);
	
	return 0;
}
