//created by akashbhalotia
#include<stdio.h>
#include<math.h>

int main()
{
	float x1,x2,y1,y2,X,Y,dist;

	printf("Enter the coordinates of the first point\n");
	scanf("%f%f",&x1,&y1);

	printf("Enter the coordinates of the second point\n");
	scanf("%f%f",&x2,&y2);

	X=pow((x1-x2),2);
	Y=pow((y1-y2),2);

	dist=sqrt(X+Y);

	printf("Distance between the points = %f\n", dist);
	return 0;
}
