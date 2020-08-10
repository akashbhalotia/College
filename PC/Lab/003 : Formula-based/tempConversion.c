//created by akashbhalotia
#include<stdio.h>

int main()
{
	float C,F;
	
	printf("Enter temperature in degree Fahrenheit\n");
	scanf("%f",&F);

	C=(F-32)*5/9;
	printf("%f degree Fahrenheit = %f degree Celcius\n", F,C);

	printf("\nEnter temperature in degree Celcius\n");
	scanf("%f",&C);

	F=C*9/5+32;
	printf("%f degree Celcius = %f degree Fahrenheit\n", C,F);

	return 0;
}
