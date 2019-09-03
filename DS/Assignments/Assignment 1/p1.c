#include <stdio.h>
int main()
{
	int i,N,T,C,sum,a;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&C);
		sum=0;
		
		for(i=0;i<N;i++)
		{
			scanf("%d",&a);
			sum+=a;
		}
		
		printf((sum+2*N<=C)?"Yes\n":"No\n");
	}
	return 0;
}
