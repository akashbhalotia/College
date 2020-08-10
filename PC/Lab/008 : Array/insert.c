//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,num,pos,tmp;

	printf("Enter number of elements in the array\n");
	scanf("%d",&N);

	int a[N],b[N+1];

	for(i=0;i<N;i++)
	{		
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}

	printf("\nOriginal Array:\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);

	printf("\n");
	printf("Enter the number and the position after it is to be inserted (1-indexed)\n");
	scanf("%d%d",&num,&pos);

	if(pos<0||pos>N)
	{
		printf("Invalid position\n");
		return 0;
	}

	tmp=0;
	
	for(i=0;i<N+1;i++)
	{
		if(i==pos)
		{
			b[i]=num;
			tmp--;
		}
		else
			b[i]=a[tmp];

		tmp++;
	}

	printf("\nNew Array:\n");
	for(i=0;i<N+1;i++)
		printf("%d,",b[i]);

	printf("\n");
	
	return 0;
}
