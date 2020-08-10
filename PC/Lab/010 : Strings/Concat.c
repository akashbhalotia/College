//created by akashbhalotia

//Concatenate two strings.
#include <stdio.h>

int length(char str[]) //function to find out number of proper characters 
{
	int i=0;
	while(str[i])
		i++;
	
	return i;
}

int main()
{
	int i,k,len1,len2;
	char str1[100],str2[100];
	
	printf("Enter two strings\n");
	scanf("%s%s",str1,str2);
	
	len1=length(str1);
	len2=length(str2);
	
	char str3[len1+len2+1];
	
	k=0;
	for(i=0;i<len1;i++) //appending string1
		str3[k++]=str1[i];
	
	for(i=0;i<len2;i++) //appending string2
		str3[k++]=str2[i];
		
	str3[k]='\0'; //signifying end of string
	
	printf("\nConcatenated string:\n%s\n",str3);
	
	return 0;
	
}
