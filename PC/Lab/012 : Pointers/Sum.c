//created by akashbhalotia

//Access two integers using pointers and add them.
#include <stdio.h>
int main()
{
	int a,b,*p=&a,*q=&b,sum; //assigning p and q as pointers to a and b respectively
	
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	sum=*p+*q; //accessing a and b using their pointers
	printf("Sum= %d\n",sum);
	
	return 0;
}
