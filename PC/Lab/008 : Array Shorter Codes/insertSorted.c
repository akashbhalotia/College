/*
	Insert an element into a sorted array so that it remains sorted.
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
void insert(int a[], int num, int N)
{
	int i,pos=N;
	for(i=0;i<N;i++)
	{
		if(num<=a[i])
		{
			pos=i;
			break;
		}
	}
	
	if(pos<N)
	{
		for(i=N;i>pos;i--)
			a[i]=a[i-1];
	}
	
	a[pos]=num;
}
int main()
{
	int a[100],i,N,num;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	//Enter a sorted array
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	printf("Enter a number to be inserted\n");
	scanf("%d",&num);
	
	insert(a,num,N);
	N++;
	
	printf("New Array:\n");
	printArr(a,N);
	
	return 0;
}
