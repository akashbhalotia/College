/*
	Delete an element from an array
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
int delete(int a[], int num, int N) //deletes first occurrence
{
	int i,pos=-1;
	for(i=0;i<N;i++)
	{
		if(a[i]==num)
		{
			pos=i;
			break;
		}
	}
	
	if(i==N)
	{
		printf("Element not present\n");
		return 0;
	}
	
	for(i=pos;i<N-1;i++)
		a[i]=a[i+1];
	
	return 1;
}
int main()
{
	int a[100],i,N,num,flag;
	
	printf("Enter length of array\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
	
	printf("Enter element to be deleted\n");
	scanf("%d",&num);
	
	flag=delete(a,num,N);
	if(flag)
		N--;
	
	printf("New Array:\n");
	printArr(a,N);
	
	return 0;
}
