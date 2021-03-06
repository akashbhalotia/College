/*
	Write a function to print all row numbers which have all 0s,
	in an M*N matrix.
	
	Only the solve function is sufficient.
	I have assumed that M and N are global variables.
*/



//created by akashbhalotia

#include<stdio.h>

int N,M;

void solve(int a[M][N])
{
	int i,j,sum;
	
	for(i=0;i<M;i++)
	{
		sum=0;
		for(j=0;j<N;j++)
			sum+=a[i][j];
		
		if(sum==0)
			printf("%d\n",(i+1));
	}
}
///////////////////////////////////////////////////////////////////////
int main()
{
	int i,j;
	
	printf("Enter the number of rows and colums\n");
	scanf("%d%d",&M,&N);
	
	int a[M][N];
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Enter a number\n");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Rows with all 0s:\n");
	solve(a);
		
	return 0;
}
