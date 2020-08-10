//created by akashbhalotia
#include<stdio.h>
int main()
{
	int a,b,tmp;

	printf("Enter two numbers\n");

	printf("A = ");
	scanf("%d",&a);

    printf("B = ");
    scanf("%d",&b);

    tmp=a;
    a=b;
    b=tmp;

    printf("\nAfter swapping,\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

	return 0;
}
