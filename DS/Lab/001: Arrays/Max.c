/*
	Find the two largest elements in an array.
	Assuming size of array >=2
	
	There are many different ways to do this. 
	Some of them will work even without modifying the array.
	It all depends on the question/purpose/situation.
	
	I chose this way because I found it simple.
*/

//created by akashbhalotia
#include <stdio.h>
#include <limits.h>

void input(int a[], int N) //takes array input
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",&a[i]);
	}
}

int nextMax(int a[], int N)
{
	int i,max=a[0],pos=0;
	
	for(i=1;i<N;i++)
	{
		if(a[i]>max)
		{
			pos=i;
			max=a[i];
		}
	}
	
	a[pos]=INT_MIN;
	return max;
}

int main()
{
	int i,N,first,second;
	
	printf("Enter number of elements\n");
	scanf("%d",&N);
	
	int a[N];
	input(a,N);
	
	first=nextMax(a,N);
	second=nextMax(a,N);
	
	printf("Largest element = %d\n",first);
	printf("Second largest = %d\n",second);
	
	return 0;
}
