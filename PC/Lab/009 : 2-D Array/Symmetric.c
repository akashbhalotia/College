/*
Find whether the given matrix is symmetric or not.
A matrix 'A' is symmetric if transpose of 'A' is equal to 'A'
'A' should be a square matrix for it to be symmetric

Solution: For every cell (i,j), check if A[i][j]=A[j][i]
*/

// created by akashbhalotia
#include <stdio.h>
int main()
{
	int A[100][100],i,j,N,M,flag=0;
	
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&N,&M);
	
	if(N!=M)
	{
		printf("\'A\' has to be a square matrix for it to be symmetric\n");
		return 0;
	}
	
	printf("Enterring the matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(A[i][j]!=A[j][i])
			{
				flag=1;
				i=N;
				break;
			}
		}
	}
	
	if(flag==0)
		printf("\nSymmetric matrix!\n");
	else
		printf("\nNot a symmetric matrix\n");
		
	return 0;
}
