//created by akashbhalotia

//Change all lowercase letters to uppercase in a sentence
#include <stdio.h>
int main()
{
	int i;
	char str[100];
	
	printf("Enter a sentence\n");
	scanf("%[^\n]",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97&&str[i]<=122) //is a lower case letter
			str[i]-=32;
	}
	
	printf("Modified:\n%s\n",str);
	
	return 0;
}

/*
ASCII VALUES:
A to Z: 65 to 90 (both inclusive)
a to z: 97 to 122 (both inclusive)

To convert lower case to upper case, we subtract its ASCII value by 32
*/
