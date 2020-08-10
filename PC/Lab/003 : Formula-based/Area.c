//created by akashbhalotia
#include<stdio.h>
#include<math.h>

int main()
{
	float r,area;

	printf("Enter radius of circle\n");
	scanf("%f",&r);

	area=M_PI*pow(r,2);
	printf("Area of circle = %f\n", area);
	return 0;
}
