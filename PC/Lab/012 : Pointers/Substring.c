/*
	Determine whether a substring is in the main string or not.
	If present, return a pointer of first occurrence.
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
char *isSubstring(char *p, char *pss)
{
	int len1,len2,i,j;
	
	len1=length(p);
	len2=length(pss);
	
	if(len2>len1)
		return NULL;
		
	for(i=0;i+len2-1<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(*(p+i+j)!=*(pss+j))
				break;
		}
		
		if(j==len2)
		{
			//printf("%d,%d\n",i,j);
			return (p+i);
		}
	}
	
	return NULL;
}
int main()
{
	int i,len1,len2;
	char str[100],substr[100];
	char *p=str,*pss=substr,*ptr;
	
	printf("Enter a string\n");
	scanf("%s",str);
	
	printf("Enter the substring\n");
	scanf("%s",substr);
	
	ptr=isSubstring(p,pss);
	
	if(ptr==NULL)
		printf("Not a substring\n");
	else
		printf("First occurrence from position %ld (0-indexed)\n",(ptr-p));
	
	return 0;
}
