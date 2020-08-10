/*
	Write a C program to input two arrays in main() function.
	and pass pass them to user defined swap() function,
	then after display the swapped arrays in main() function.
*/

#include <stdio.h>

void swap(int a[], int b[], int N)
{
	int tmp, i;
	
	for(i=0;i<N;i++)
	{
		tmp=a[i];
		a[i]=b[i];
		b[i]=tmp;
	}
}

void main()
{
	int a[100], b[100], i, N;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	printf("Enterring array a\n");
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	printf("Enterring array b\n");
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&b[i]);
	}
	
	swap(a,b,N);
	
	printf("Swapped array a\n");
	for(i=0;i<N;i++)
		printf("%d,",a[i]);
	
	printf("\n");
	
	printf("Swapped array b\n");
	for(i=0;i<N;i++)
		printf("%d,",b[i]);
	
	printf("\n");
}

