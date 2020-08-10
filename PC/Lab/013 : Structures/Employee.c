/*
	Create an array of employee structure to store emp-no., name, basic salary,
	and hra. Input the details of N employees and display emp-no., name, basic, 
	hra and net salary. Display the details of all employees whose
	net salary is more than average net salary of all employees.
*/

//created by akashbhalotia
#include <stdio.h>
struct Employee
{
	char name[100];
	int num,basic,hra,net;
} details[100];

float average(int N)
{
	int i;
	float val=0.0;
	
	for(i=0;i<N;i++)
		val+=details[i].net;
		
	return val/N;
}

void print(struct Employee a)
{
	printf("Name = %s\n",a.name);
	printf("Employee number = %d\n",a.num);
	printf("Basic salary = Rs. %d\n",a.basic);
	printf("House rent allowance = Rs. %d\n",a.hra);
	printf("Net salary = Rs. %d\n\n",a.net);
}

void check(float avg, int N)
{
	int i;
	
	printf("Employees with net salary >= %f:\n",avg);
	for(i=0;i<N;i++)
	{
		if(details[i].net>=avg)
			print(details[i]);
	}
}

int main()
{
	int i,N;
	float avg;
	
	printf("Enter number of employees\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Employee %d:\n",(i+1));
		
		printf("Enter name\n");
		scanf("%s",details[i].name);
		
		printf("Enter employee number\n");
		scanf("%d",&details[i].num);
		
		printf("Enter Basic salary\n");
		scanf("%d",&details[i].basic);
		
		printf("Enter house rent allowance\n");
		scanf("%d",&details[i].hra);
		
		details[i].net=details[i].basic+details[i].net;
		printf("\n");
	}
	
	avg=average(N);
	printf("Average net salary = Rs. %f\n\n",avg);
	check(avg,N);
	
	return 0;
}
