//created by akashbhalotia
#include<stdio.h>

int main()
{
	int N;

	printf("Enter a year\n");
	scanf("%d",&N);

	if(N%4==0)
	{
		if(N%100==0)
		{
			if(N%400==0)
				printf("Leap Year\n");
			else
				printf("Not Leap Year\n");
		}
		else
			printf("Leap Year\n");
	}
	else
		printf("Not Leap Year\n");

	return 0;
}
