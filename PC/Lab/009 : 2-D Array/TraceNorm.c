/*
Find the trace and norm of a square matrix

Trace: sum of elements of principal diagonal (upper left to lower right)
Norm: square root of (sum of squares of each element of matrix)
Just like RMS of BET
*/

// created by akashbhalotia
#include <stdio.h>
#include <math.h>
int isSquareMatrix(int N, int M)
{
	return (N==M)?1:0;
}

int main()
{
	int a[100][100],i,j,N,M,trace=0,sum=0;
	float norm;
	
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&N,&M);
	
	if(!isSquareMatrix(N,M))
	{
		printf("Should be a square matrix\n");
		return 0;
	}
	
	printf("Enterring the matrix\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&a[i][j]);
		}
	}
	
	//trace
	for(i=0;i<N;i++)
		trace+=a[i][i];
		
	//norm
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			sum+=(int)pow(a[i][j],2);
	}
	norm=sqrt(sum);
	
	printf("Trace = %d\n",trace);
	printf("Norm = %f\n",norm);
		
	return 0;
}
