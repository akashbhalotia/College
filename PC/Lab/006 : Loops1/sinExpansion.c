//taken from https://www.codingconnect.net/c-program-sine-series/
#include <stdio.h>
#include <math.h>
int main()
{
	int N,i;
	long double sum,X,tmp;

	printf("Enter the value of angle in degrees and the number of terms\n");
	scanf("%Lf%d",&X,&N);

	X=X*M_PI/180;
	tmp=sum=X;

	for(i=2;i<=N;i++)
	{
		tmp=(tmp*(-1)*pow(X,2))/((i*2-1)*(i*2-2));
		sum+=tmp;
	}

	printf("sin(x) approximates to : %Lf\n",sum);

	return 0;
}
