//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,K,i,j;

	printf("Enter N and K\n");
	scanf("%d%d",&N,&K);

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=K;j++)
		{
			printf("%d\t",(i*j));
		}
		printf("\n");
	}

	return 0;
}
