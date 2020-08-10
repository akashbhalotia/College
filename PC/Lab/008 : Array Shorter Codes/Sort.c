/*
	Bubble Sort
*/

//created by akashbhalotia
#include <stdio.h>
void printArr(int a[], int N)
{
	int i;
	for(i=0;i<N;i++)
		printf("%d,",a[i]);
	
	printf("\n");
}
void sort(int a[], int N)
{
	int i,j,tmp;
	
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
}
int main()
{
	int a[100],i,N;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	sort(a,N);
	
	printf("Sorted Array:\n");
	printArr(a,N);
	
	return 0;
}
