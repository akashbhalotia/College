/*
	Insert an element into an array
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
void insert(int a[], int num, int pos, int N)
{
	int i;
	if(pos<N)
	{
		for(i=N;i>pos;i--)
			a[i]=a[i-1];
	}
	
	a[pos]=num;
}
int main()
{
	int a[100],i,N,num,pos;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	printf("Enter element to be inserted and the position to insert it to\n");
	scanf("%d%d",&num,&pos);
	
	insert(a,num,pos,N);
	N++;
	printf("New Array:\n");
	printArr(a,N);
	
	return 0;
}
