//taken from https://codeforwin.org/2016/04/c-program-to-find-all-roots-of-quadratic-equation-using-switch.html
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,D,root1,root2,IP;

	printf("Enter the integer coefficients\n");
	scanf("%f%f%f",&a,&b,&c);

	D=pow(b,2)-4*a*c;

	switch(D>0)
	{
		case 1:
			root1=(-b+sqrt(D))/(2*a);
			root2=(-b-sqrt(D))/(2*a);
			
			printf("Two distinct real roots: %f and %f\n",root1,root2);
			break;
		
		case 0:
			switch(D<0)
			{
				case 1:
					root1=root2=-b/(2*a);
					IP=sqrt(-D)/(2*a);
				
					printf("Two distinct complex roots: %f+%fi and %f-%fi\n",root1,IP,root2,IP);
					break;

				case 0:
					root1=root2=-b/(2*a);
					printf("Two equal real roots: %f and %f\n",root1,root2);
					break;
			}
	}
	return 0;
}
