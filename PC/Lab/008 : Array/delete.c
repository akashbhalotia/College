//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,num,tmp,pos;

	printf("Enter number of elements in the array\n");
	scanf("%d",&N);

	int a[N],b[N-1];

	for(i=0;i<N;i++)
	{		
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}

	printf("\nOriginal Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");
	printf("Enter the number to be deleted\n");
	scanf("%d",&num);

	pos=-1;
	
	for(i=0;i<N;i++)
	{
		if(num==a[i])
		{
			pos=i;
			break;
		}
	}

	if(pos==-1)
	{
		printf("Number doesn't exist in the array\n");
		return 0;
	}

	tmp=0;
	
	for(i=0;i<N;i++)
	{
		if(i==pos)
			tmp--;
		else
			b[tmp]=a[i];

		tmp++;
	}

	printf("\nNew Array:\n");
	for(i=0;i<N-1;i++)
		printf("%d,",b[i]);

	printf("\n");
	
	return 0;
}
