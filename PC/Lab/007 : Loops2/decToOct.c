//created by akashbhalotia
#include <stdio.h>
int main()
{
	int dec,oct=0,tmp=1;

	printf("Enter Decimal number\n");
	scanf("%d",&dec);

	while(dec>0)
	{
		oct+=(dec%8)*tmp;
		tmp*=10;
		dec/=8;
	}
	
	printf("Octal = %d\n",oct);
	
	return 0;
}
