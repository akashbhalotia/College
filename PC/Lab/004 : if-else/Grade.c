//created by akashbhalotia
#include<stdio.h>

int main()
{
	char grade;
	int score;

	printf("Enter your score\n");
	scanf("%d",&score);

	if(score>=9)
		grade='A';
	else if(score>=7)
		grade='B';
	else if(score>=5)
		grade='C';
	else if(score>=3)
		grade='D';
	else
		grade='F';

	printf("Your grade is: %c\n", grade);

	return 0;
}
