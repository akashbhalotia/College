/*
	Find the largest and smallest element in an array
*/

//created by akashbhalotia
#include <stdio.h>
void reverse(int a[], int N)
{
	int i,tmp;
	
	for(i=0;i<N/2;i++)
	{
		tmp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=tmp;
	}
}
void printArr(int a[], int N)
{
	int i;
	for(i=0;i<N;i++)
		printf("%d,",a[i]);
	
	printf("\n");
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
	
	reverse(a,N);
	printf("Reversed Array:\n");
	printArr(a,N);
	
	return 0;
}
