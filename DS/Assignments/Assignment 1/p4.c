// created by akashbhalotia
#include <stdio.h>
#include <stdlib.h>
void input(int *a, int N) //takes 
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Enter a number\n");
		scanf("%d",a+i);
	}
}
void sort(int *a, int N) //Selection Sort
{
	int i,j,tmp,min,pos;
	
	for(i=0;i<N;i++)
	{
		min=*(a+i);
		pos=i;
		
		for(j=i+1;j<N;j++)
		{
			if(*(a+j)<min)
			{
				min=*(a+j);
				pos=j;
			}
		}
		
		tmp=*(a+i);
		*(a+i)=*(a+pos);
		*(a+pos)=tmp;
	}
}
void reverse(int *a, int N) //reverses the array
{
	int i,tmp;
	
	for(i=0;i<N/2;i++)
	{
		tmp=*(a+i);
		*(a+i)=*(a+(N-i-1));
		*(a+(N-i-1))=tmp;
	}
}
void printArr(int *a, int N) //prints the array
{
	int i;
	
	for(i=0;i<N;i++)
		printf(" %d",*(a+i));
	printf("\n");
}
int main()
{
	int i,N;
	
	printf("Enter size of the array\n");
	scanf("%d",&N);
	
	int *a=(int *)malloc(N*(sizeof(int)));
	input(a,N);
	sort(a,N);
	
	printf("\nAscending order:");
	printArr(a,N);
	
	reverse(a,N);
	printf("Descending order:");
	printArr(a,N);
	
	return 0;
}
