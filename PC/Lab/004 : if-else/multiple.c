//created by akashbhalotia
#include<stdio.h>

int main()
{
	int N,M;

	printf("Enter two numbers\n");
	scanf("%d%d",&N,&M);

	if(N==0||M==0||N%M==0||M%N==0)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}
