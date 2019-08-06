/*
	Linear Search
*/

//created by akashbhalotia
#include <stdio.h>

void input(int a[], int N) //takes array input
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
}

int search(int a[], int N, int key) //linear search
{
	int i;
	
	for(i=0;i<N;i++)
	{
		if(a[i]==key)
			return i;
	}
	
	return -1;
}

int main()
{
	int i,N,key,pos;
	
	printf("Enter number of elements\n");
	scanf("%d",&N);
	
	int a[N];
	input(a,N);
	
	printf("Enter a number to be searched\n");
	scanf("%d",&key);
	
	pos=search(a,N,key);
	
	if(pos==-1)
		printf("Element not present in array\n");
	else
		printf("Element found at index: %d, (0-indexed)\n",pos);
	
	return 0;
}
