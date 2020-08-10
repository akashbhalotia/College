/*
	Create an array of student structure to store the roll no.,
	name and marks in 3 subjects. Input the details of N students
	in to the array and display roll no., name and total marks
	of each student in decreasing order of total marks.
*/

//created by akashbhalotia
#include <stdio.h>
struct Student
{
	char name[100];
	int roll,marks[3],total;
} details[100], tmp;

void sort(int N)
{
	int i,j,k;
	
	//Bubble Sort
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(details[j].total<details[j+1].total)
			{
				tmp=details[j];
				details[j]=details[j+1];
				details[j+1]=tmp;
			}
		}
	}
}

void print(int N)
{
	int i;
	
	for(i=0;i<N;i++)
	{
		printf("Name = %s\n",details[i].name);
		printf("Roll number = %d\n",details[i].roll);
		printf("Total marks = %d\n\n",details[i].total);
	}
}

int main()
{
	int i,N;
	
	printf("Enter number of students\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Student: %d\n",(i+1));
		
		printf("Enter name\n");
		scanf("%s",details[i].name);
		
		printf("Enter roll number\n");
		scanf("%d",&details[i].roll);
		
		printf("Enter marks in 3 subjects\n");
		scanf("%d%d%d",&details[i].marks[0],&details[i].marks[1],&details[i].marks[2]);
		
		details[i].total=details[i].marks[0]+details[i].marks[1]+details[i].marks[2];
		printf("\n");
	}
	
	sort(N);
	print(N);
	
	return 0;
}
