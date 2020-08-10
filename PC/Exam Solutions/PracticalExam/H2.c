/*
	Menu driven encryption program
	shift by 5
	
	Practical exam
*/

#include <stdio.h>

char str[100];
int status,eStatus;

void set(char input[])
{
	int i;
	for(i=0;input[i]!='\0';i++)
		str[i]=input[i];
	str[i]='\0';
	
	status=1;
	eStatus=0;
}	

void encrypt()
{
	int i,tmp;
	
	if(status==0)
	{
		printf("No message entered.\n");
		return;
	}
	
	if(eStatus==1)
	{
		printf("Message already encrypted!\n");
		return;
	}
	
	
	for(i=0;str[i]!='\0';i++)
	{
		if(65<=str[i]&&str[i]<=90)
		{
			str[i]+=5;
			if(str[i]>90)
				str[i]-=26;
		}
		else if(97<=str[i]&&str[i]<=122)
		{
			str[i]+=5;
			if(str[i]>122)
				str[i]-=26;
		}
	}
	
	printf("Message encrypted!\n");
	eStatus=1;
}

void decrypt()
{
	int i;
	
	if(status==0)
	{
		printf("No message entered.\n");
		return;
	}
	
	if(eStatus==0)
	{
		printf("Message not encrypted!\n");
		return;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		if(65<=str[i]&&str[i]<=90)
		{
			str[i]-=5;
			if(str[i]<65)
				str[i]+=26;
		}
		else if(97<=str[i]&&str[i]<=122)
		{
			str[i]-=5;
			if(str[i]<97)
				str[i]+=26;
		}
	}
	
	printf("Message Decrypted!\n");
	eStatus=0;
}

void show()
{
	if(status==0)
		printf("No message entered.\n");
	else
		printf("%s",str);
}

void pExit()
{
	printf("Exit!\n");
}

int main()
{
	int choice;
	char input[100];
	status=eStatus=0;
	
	do
	{
		printf("\n\n");
		printf("MENU\n");
		printf("1) Enter a message\n");
		printf("2) Encrypt the message\n");
		printf("3) Decrypt the message\n");
		printf("4) Show the message\n");
		printf("5) Exit\n\n");

		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		printf("\n");
		
		switch(choice)
		{
			case 1: 
			printf("Enter a message\n");
			scanf("%s",input);
			set(input);
			break;
			
			case 2: 
			encrypt();
			break;
			
			case 3:
			decrypt();
			break;
			
			case 4:
			show();
			break;
			
			case 5:
			pExit();
			break;
			
			default:
			printf("Invalid choice!\n");
			break;
		}
	}
	while(choice!=5);
	
	return 0;
}
