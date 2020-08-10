//created by akashbhalotia

//Check if the given string is a palindrome or not using sring handling functions
#include <stdio.h>
#include <string.h>

int main()
{
	int i,flag,len,l,r;
	char str[100];
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	len=strlen(str); //string handling function to return actual length of the string
	
	l=0;
	r=len-1;
	
	flag=0;
	
	while(l<r) //checking characters at positions l nd r everytime
	{
		if(str[l]!=str[r])
		{
			flag=1;
			break;
		}
		l++;
		r--;
	}
	
	if(flag)
		printf("Not palindrome\n");
	else
		printf("Palindrome!\n");
		
	return 0;
}
