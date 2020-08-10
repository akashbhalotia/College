/*
	Components:
	------------
	
	5 employees: input the basic salary.
	write user-defined function which accepts the basic salary
	and returns gross salary
	
	gross=net
	gross salary=basic+HRA+DA
	
	HRA= House rent allowance
	DA= Dearness Allowance
*/

#include <stdio.h>

float calcGross(int basic)
{
	float gross, HRA, DA;
	DA=HRA=gross=0.0;
	
	if(basic<=15000)
	{
		HRA=(float)18/100*(float)basic;
		DA=(float)78/100*(float)basic;
	}
	else if(basic<=25000)
	{
		HRA=(float)24/100*(float)basic;
		DA=(float)85/100*(float)basic;
	}
	else
	{
		HRA=(float)28/100*(float)basic;
		DA=(float)94/100*(float)basic;
	}
	
	gross=basic+HRA+DA;
	
	return gross;
}

void main()
{
	int i,basic;
	float gross;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter salary for employee %d\n",i);
		scanf("%d",&basic);
		
		gross=calcGross(basic);
		printf("Your gross salary is Rs. %f\n\n",gross);
	}
}
