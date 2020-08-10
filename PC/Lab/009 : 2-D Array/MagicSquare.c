/*
Check if the given matrix is a magic square or not

Magic Square: Sum of elements of every row,column and diagonal is equal
*/

// created by akashbhalotia
#include <stdio.h>
int condition(int a, int b)
{
	return (a==b)?1:0;
}

int check(int a[][100], int N, int M, int sum)
{
	int tmp,i,j,flag=1;
	
	//row sums
	for(i=0;i<N;i++)
	{	
		tmp=0;
		for(j=0;j<M;j++)
			tmp+=a[i][j];
		
		flag&=condition(tmp,sum);
	}
	
	//column sums
	for(j=0;j<M;j++)
	{
		tmp=0;
		for(i=0;i<N;i++)
			tmp+=a[i][j];
		
		flag&=condition(tmp,sum);
	}
	
	//diagonal1
	tmp=0;
	for(i=0;i<N;i++)
		tmp+=a[i][i];
	
	flag&=condition(tmp,sum);
	
	//diagonal2
	tmp=0;
	for(i=0;i<N;i++)
		tmp+=a[i][N-i-1];
		
	flag&=condition(tmp,sum);
	
	return flag;
}

int main()
{
	int a[100][100],i,j,N,M,sum=0;
	
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&N,&M);
	
	if(N!=M)
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
	
	// sum of elements of row1
	for(j=0;j<M;j++)
		sum+=a[0][j];
		
	if(check(a,N,M,sum))
		printf("Magic Square!\n");
	else printf("Not magic square\n");
		
	return 0;
}

/*
About flag&=condition(tmp,sum)
=========================

& here is the biwise AND operator.
&= signifies the shorthand operation, equivalent to flag=flag&condition(tmp,sum);
The function 'condition' returns 1 if tmp=sum, 0 otherwise

flag is 1 initially, signifying TRUE
0&0=0
0&1=0
1&0=0
1&1=1

thus flag will remain 1 ONLY if all the conditions return 1, meaning 
that the sum of every row, column and diagonal is equal.

if you have trouble understanding this, you can simply remove the condition() function, and 
write the check function like this:

int check(int a[][100], int N, int M, int sum)
{
	int tmp,i,j,flag=1;
	
	//row sums
	for(i=0;i<N;i++)
	{	
		tmp=0;
		for(j=0;j<M;j++)
			tmp+=a[i][j];
		
		if(tmp!=sum)
			return 0;
	}
	
	//column sums
	for(j=0;j<M;j++)
	{
		tmp=0;
		for(i=0;i<N;i++)
			tmp+=a[i][j];
		
		if(tmp!=sum)
			return 0;
	}
	
	//diagonal1
	tmp=0;
	for(i=0;i<N;i++)
		tmp+=a[i][i];
	
	if(tmp!=sum)
			return 0;
	
	//diagonal2
	tmp=0;
	for(i=0;i<N;i++)
		tmp+=a[i][N-i-1];
		
	if(tmp!=sum)
			return 0;
	
	return 1;
}
*/
