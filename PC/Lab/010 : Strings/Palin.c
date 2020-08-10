//created by akashbhalotia

//Check if the given string is a palindrome or not
#include <stdio.h>
int main()
{
	int i,flag,len,l,r;
	char str[100];
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	i=0;
	while(str[i]!='\0') //finding length of the string
		i++;
	
	len=i;
	
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
