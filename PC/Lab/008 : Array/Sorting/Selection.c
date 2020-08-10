//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,j,tmp,min,pos;

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
		min=a[i];
		pos=i;

		for(j=i+1;j<N;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}

		tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
	}

	printf("\nSorted Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");
	
	return 0;
}
