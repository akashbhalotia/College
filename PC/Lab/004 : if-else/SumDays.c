//created by akashbhalotia
#include<stdio.h>

int main()
{
	int m,d=0,y,i;

	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};

	printf("Enter year\n");
	scanf("%d",&y);

	//checking for leap year.
	//If it is a leap year, make the number of days in February = 29
	days[1]=(y%4==0)?((y%100==0)?((y%400==0)?29:28):29):28;


	printf("Enter month number\n");
	scanf("%d",&m);

	for(i=0;i<m;i++)
		d+=days[i];

	printf("Total number of days = %d\n", d);

	return 0;
}
