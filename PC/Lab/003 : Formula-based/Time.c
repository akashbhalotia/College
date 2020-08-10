//created by akashbhalotia
#include<stdio.h>
int main()
{
	int s,h,m;
	h=m=0;

	printf("Enter Time in seconds\n");
	scanf("%d",&s);

	h=s/3600;
	s%=3600;

	m=s/60;
	s%=60;

	printf("\nHours = %d\n", h);
	printf("Minutes = %d\n", m);
	printf("Seconds = %d\n", s);

	return 0;
}
