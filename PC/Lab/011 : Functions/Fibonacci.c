//created by akashbhalotia

//Print first N fibonacci numbers
#include <stdio.h>

int lim; //gloabl variable

int fibo(int N) //returns the Nth fibonacci number
{
	//base coditions 
	if(N==1)
		return 0;
	if(N==2)
		return 1;
	
	return fibo(N-1)+fibo(N-2); //recursive call
}

void iterate(int i) //prints the ith fibonacci number everytime
{
	printf("%d ",fibo(i));
	
	if(i<lim) //base condition
		iterate(i+1); //recursive call
}

int main()
{
	printf("Enter N\n");
	scanf("%d",&lim);
	
	printf("First %d fibonacci numbers:\n",lim);
	iterate(1);
	
	return 0;
}
