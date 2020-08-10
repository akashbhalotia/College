//created by akashbhalotia
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,S,Area;

	printf("Enter three sides\n");
	scanf("%f%f%f",&a,&b,&c);

	if(!(a+b>c&&b+c>a&&c+a>b))
		printf("Triangle not possible\n");
	else
	{

		S=(a+b+c)/2;
		Area=sqrt(S*(S-a)*(S-b)*(S-c));

		printf("Area = %f\n",Area);
	}

	return 0;
}
