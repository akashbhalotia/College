//created by akashbhalotia
#include<stdio.h>
int main()
{
	int a,b;

	printf("Enter two numbers\n");

	printf("A = ");
	scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping,\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

	return 0;
}
