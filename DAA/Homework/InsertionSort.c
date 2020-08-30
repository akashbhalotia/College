/*
	Insertion Sort.
	Worst case: O(N^2), example: when the array is sorted in the opposite order.
	Best Case: O(N), when the array is sorted in desired order.
*/


//created by Whiplash99
#include<stdio.h>

void swap(int *a, int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void sort(int a[], int N)
{
	int i,j,tmp;
	
	for(i=1;i<N;i++)
	{
		j=i-1;
		while(j>=0&&a[j]>a[j+1])
		{	
			 swap(&a[j],&a[j+1]);
			 j--;
		}
	}
}
void display(int a[], int N)
{
	int i;
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int i,N;
	
	printf("Enter the number of elements\n");
	scanf("%d",&N);
	
	int a[N];
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	printf("\nArray before sorting:\n");
	display(a,N);
	
	sort(a,N);
	printf("\nArray after sorting:\n");
	display(a,N);
	
	return 0;
}
