//created by akashbhalotia
#include <stdio.h>
int main()
{
	long bin,tmp=1,dec=0;

	printf("Enter binary number\n");
	scanf("%ld",&bin);

	while(bin>0)
	{
		dec+=(bin%2)*tmp;
		bin/=10;
		tmp*=2;
	}

	printf("Decimal equivalent = %ld\n",dec);

	return 0;
}
