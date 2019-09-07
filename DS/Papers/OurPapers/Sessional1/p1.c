/*
	Write a program to find the largest in two halves of
	an array, and then find the largest among them.
	
	There should be a function to take array input,
	another to send a half of the array and find its largest.
	
	The array has to be dynamically allocated.
*/

//created by akashbhalotia

#include<stdio.h>
#include<stdlib.h>

void input(int *a, int n) //reads array input
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a number\n");
		scanf("%d",(a+i));
	}
}
int largest(int *a, int l,int r) //largest in the array in a range
{
	int i,ans=*(a+l);
	
	for(i=l+1;i<r;i++)
	{
		if(*(a+i)>ans)
			ans=*(a+i);
	}
	
	return ans;
}
int main()
{
	int n,*a,ans,tmp;
	
	printf("Enter number of elements\n");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int)); //dynamic allocation
	input(a,n);
	
	ans=largest(a,0,n/2);
	if(n>1)
	{
		tmp=largest(a,n/2,n);
		if(tmp>ans)
			ans=tmp;
	}
	
	printf("Largest = %d\n",ans);
		
	return 0;
}
