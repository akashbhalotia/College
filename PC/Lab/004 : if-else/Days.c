//created by akashbhalotia
#include<stdio.h>

int main()
{
	int m,d;

	printf("Enter the month number\n");
	scanf("%d",&m);

	if(m==4||m==6||m==9||m==11)
		d=30;
	else if(m==2)
		d=28;
	else
		d=31;

	printf("Number of days = %d\n",d);

	return 0;
}
