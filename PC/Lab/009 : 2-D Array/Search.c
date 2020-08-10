/*
Searching for an element in the matrix and counting the number 
of its occurrences.
*/

// created by akashbhalotia
#include <stdio.h>
int main()
{
	int matrix[100][100],i,j,N,M,key,count=0;
	
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&N,&M);
	
	printf("Enterring the matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nEnter element to be searched\n");
	scanf("%d",&key);
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(matrix[i][j]==key)
				count++;
		}
	}
	
	if(count==0)
		printf("%d not present in the matrix\n",key);
	else
		printf("%d occurs %d times\n",key,count);
		
	return 0;
}
