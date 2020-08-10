/*
Compute the row sum and the column sum of a given matrix
*/

// created by akashbhalotia
#include <stdio.h>
int main()
{
	int A[100][100],i,j,N,M,sum;
	
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&N,&M);
	
	printf("Enterring the matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&A[i][j]);
		}
	}
	
	//row sum
	for(i=0;i<N;i++)
	{
		sum=0;
		for(j=0;j<M;j++)
			sum+=A[i][j];
		
		printf("\nSum of elements of row %d is: %d\n",(i+1),sum);
	}
	
	//column sum
	for(j=0;j<M;j++)
	{
		sum=0;
		for(i=0;i<N;i++)
			sum+=A[i][j];
		
		printf("\nSum of elements of column %d is: %d\n",(j+1),sum);
	}
		
	return 0;
}
