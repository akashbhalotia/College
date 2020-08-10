/*
	Components:
	-------------
	
	switch-case
	menu-driven
	
	pin-validation
	display current balance
	withdrawal an amt specified by user
	deposit an amt specified by user
*/

#include <stdio.h>

int bal,pin;

int check(int input)
{
	if(input==pin)
		return 1;
	return 0;
}

void display()
{
	printf("Your balance is Rs. %d\n",bal);
}

void withdraw(int input)
{
	if(bal<input)
		printf("Insufficient balance\n");
	else
		bal=bal-input;
		
	display();
}

void deposit(int input)
{
	bal=bal+input;
	display();
}

void main()
{

	int choice=0,input;
	
	//for bank employee to input
	printf("Enter valid pin\n");
	scanf("%d",&pin);
	
	printf("Enter initial balance\n");
	scanf("%d",&bal);
	
	do
	{
		switch(choice)
		{
			case 0:
			printf("Enter the pin\n");
			scanf("%d",&input);
			if(check(input)==1)
				printf("Ok. You may proceed\n");
			else
			{
				printf("Invalid pin\n");
				choice=4;
			}
			break;
			
			case 1: display();
			break;
			
			case 2:
			printf("Enter withdrawal amount\n");
			scanf("%d",&input);
			withdraw(input);
			break;
			
			case 3:
			printf("Enter amount to deposit\n");
			scanf("%d",&input);
			deposit(input);
			break;
			
			default:
			printf("Invalid Input\n");
			break;
		}
		
		if(choice!=4)
		{
			printf("\n");
			printf("MENU:\n");
			printf("1) Display balance\n");
			printf("2) Withdraw\n");
			printf("3) Deposit\n");
			printf("4) Exit\n");
			printf("Enter your choice\n");
			
			scanf("%d",&choice);
		}
	}
	while(choice!=4);
}
