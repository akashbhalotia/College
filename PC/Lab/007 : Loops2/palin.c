//created by akashbhalotia
#include <stdio.h>
int main()
{
	int N,copy,rev=0;

	printf("Enter a number\n");
	scanf("%d",&N);

	copy=N;

	while(copy>0)
	{
		rev=rev*10+copy%10;
		copy/=10;
	}

	if(rev==N)
		printf("Palindrome\n");
	else
		printf("Not a palindrome\n");
	
	return 0;
}
