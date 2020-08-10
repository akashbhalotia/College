/*
	Matrix Multiplication.
	
	To be compatible, number of columns in 'A' 
	should be equal to number of rows in 'B'.
	
	Resulting 'C' has dimensions c1*r2
*/

// created by akashbhalotia
#include <stdio.h>
int isCompatible(int c1, int r2)
{
	return (c1==r2)?1:0;
}
int main()
{
	int i,j,k,R1,C1,R2,C2,A[100][100],B[100][100],C[100][100];
	
	printf("Enter number of rows and columns of matrix \'A\'\n");
	scanf("%d%d",&R1,&C1);
	
	printf("Enter number of rows and columns of matrix \'B\'\n");
	scanf("%d%d",&R2,&C2);
	
	if(!isCompatible(C1,R2))
	{
		printf("Not Compatible to multiply\n");
		return 0;
	}
	
	printf("Enter elements of matrix \'A\'...\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Enter elements of matrix \'B\'...\n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&B[i][j]);
		}
	}
	
	//initialise 'C'
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
			C[i][j]=0;
	}
	
	//multiplication
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			for(k=0;k<R2;k++)
				C[i][j]+=A[i][k]*B[k][j];
		}
	}
	
	printf("Resultant:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
			printf("%d ",C[i][j]);
		
		printf("\n");
	}
	
	return 0;
}
