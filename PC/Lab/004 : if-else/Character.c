//created by akashbhalotia
#include<stdio.h>

int main()
{
	char c;

	printf("Enter a character\n");
	scanf("%c",&c);

	if(c>=48&&c<=57)
		printf("Digit\n");
	else
	{
		if(c>90)
			c-=32;

		if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			printf("Vowel\n");
		else
			printf("Consonant\n");
	}

	return 0;
}
