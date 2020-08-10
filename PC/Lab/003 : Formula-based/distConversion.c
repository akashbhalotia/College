//created by akashbhalotia
#include<stdio.h>

int main()
{
	float mm,cm,inch,feet;
	cm=inch=feet=0;

	printf("Enter distance in mm\n");
	scanf("%f",&mm);

	cm=mm/10;
	inch=cm/2.5;
	feet=inch/12;

	printf("\n%f millimetres = \n\n", mm);
	printf("%f centimetres\n", cm);
	printf("%f inches\n", inch);
	printf("%f feet\n", feet);

	return 0;
}
