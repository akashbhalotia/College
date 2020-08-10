//created by akashbhalotia
#include <stdio.h>
int main()
{
	int a,b,tmp,LCM,GCD,N,M;

	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
		
	if(a<=0||b<=0)
	{
		printf("Invalid Input\n");
		return 0;
	}

	N=a;
	M=b;
	
	while(N>0)
	{
		tmp=N;
		N=M%N;
		M=tmp;
	}
	
	GCD=M;
	LCM=a*b/GCD;

	printf("HCF = %d\n",GCD);
	printf("LCM = %d\n",LCM);
	
	return 0;
}
