//created by akashbhalotia

//Check if a given string is present in another string as a subtring
#include <stdio.h>
int length(char str[]) //returns the actual length of the string
{
	int i=0;
	
	while(str[i]!='\0')
		i++;
	
	return i;
}

int main()
{
	int i,j,len1,len2,pos=-1;
	char str[100],substr[100];
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	printf("Enter the subtring needed to be searched\n");
	scanf("%s",substr);
	
	len1=length(str);
	len2=length(substr);
	
	if(len2<=len1)
	{
		for(i=0;i<len1-len2+1;i++)
		{
			for(j=0;j<len2;j++) //starting at position i, check the next j characters
			{
				if(str[i+j]!=substr[j])
					break;
			}
			
			if(j==len2)
			{
				pos=i;
				break;
			}
		}
	}
	
	if(pos==-1)
		printf("Substring not found!\n");
	else
		printf("Substring found at position: %d\n",(pos+1));
		
	return 0;
}
