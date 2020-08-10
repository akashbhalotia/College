//created by akashbhalotia
#include <stdio.h>
int main()
{
	int n,rev=0;

	printf("Enter a number\n");
	scanf("%d",&n);

	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	printf("Reverse = %d\n",rev);

	return 0;
}
