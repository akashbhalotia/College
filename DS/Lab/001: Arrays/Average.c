/*
	Input marks of N students and find the average.
	Use functions!!!
*/

//created by akashbhalotia
#include <stdio.h>

void input(int a[], int N) //takes array input
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Enter marks\n");
		scanf("%d",&a[i]);
	}
}

int add(int a[], int N) //adds elements of array
{
	int i,sum=0;
	
	for(i=0;i<N;i++)
		sum+=a[i];
		
	return sum;
}

float average(int a[], int N) //finds average of array elements
{
	int sum=add(a,N);
	return (float)sum/N;
}

int main()
{
	int i,N;
	float avg;
	
	printf("Enter number of students\n");
	scanf("%d",&N);
	
	int a[N];
	input(a,N);
	
	avg=average(a,N);
	
	printf("Average = %f\n",avg);
	
	return 0;
}
