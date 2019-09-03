//created by akashbhalotia
#include <stdio.h>

void init(int a[], int N)
{
	int i;
	for(i=0;i<N;i++)
		a[i]=0;
}
int main()
{
	int i,M,x,y,T,count,tmp,prev;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&M,&x,&y);
		count=prev=0;
		
		int house[151];
		init(house,151);
		
		for(i=0;i<M;i++)
		{
			scanf("%d",&tmp);
			house[tmp]=1;
		}
		
		for(i=1;i<=150;i++)
		{
			if(house[i]==1)
			{
				tmp=i-x*y;
				if(tmp>prev)
					count+=tmp-prev-1;
				prev=i+x*y;
			}
		}
		
		if(prev<=150)
			count+=150-prev;
			
		printf("%d\n",count);
	}
	
	return 0;
}
