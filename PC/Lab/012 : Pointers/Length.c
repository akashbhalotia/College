/*
	Determine the length of a character string using pointers
*/

//created by akashbhalotia
#include <stdio.h>
int length(char *p)
{
	int i=0;
	
	while(*(p+i)!='\0')
		i++;
		
	return i;
}
int main()
{
	int i,len;
	char str[100];
	char *p=str;
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	len=length(p);
	printf("Length = %d\n",len);
	
	return 0;
}
