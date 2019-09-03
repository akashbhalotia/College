//created by akashbhalotia
#include <stdio.h>
int findMin(int a[], int N)
{
	int i,min=a[0];
	
	for(i=1;i<N;i++)
		min=(a[i]<min)?a[i]:min;
	
	return min;
}
int solve(int a[], int N)
{
	int i,min=findMin(a,N),ans=0;
	
	for(i=0;i<N;i++)
		ans+=a[i]-min;
		
	return ans;
}
int main()
{
	int i,N,T;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int W[N];
		
		for(i=0;i<N;i++)
			scanf("%d",&W[i]);
		
		printf("%d\n",solve(W,N));
	}
	
	return 0;
}
