/*
	Define a struct type, struct personal that would contain person name, date of 
	joining and salary. Using this structure write a program to read this
	information for one person from the keyboard and print the same on the screen.
*/

//created by akashbhalotia
#include <stdio.h>
struct personal
{
	char name[100],date[100];
	int salary;
};
int main()
{
	struct personal person;
	
	printf("Enter name, date of joining and salary\n");
	scanf("%s%s%d",person.name,person.date,&person.salary);
	
	printf("\nName = %s\n",person.name);
	printf("Date of joining = %s\n",person.date);
	printf("Salary = Rs. %d\n",person.salary);
	
	return 0;
}
