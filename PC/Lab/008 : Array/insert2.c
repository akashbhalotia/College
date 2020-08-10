//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,i,num,tmp,pos;

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
	printf("Enter the number to be inserted\n");
	scanf("%d",&num);

	pos=N;
	
	for(i=0;i<N;i++)
	{
		if(num<a[i])
		{
			pos=i;
			break;
		}
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
