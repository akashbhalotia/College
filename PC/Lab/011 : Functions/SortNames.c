/*
	Write a function sort for sorting a list of names, which will
	use a function compareTo(), to compare two names.
*/

#include <stdio.h>
//returns 1 if name1[] is bigger, -1 otherwise.
int compareTo(char name1[], char name2[])
{
	int i;
	
	for(i=0;name1[i]!='\0';i++)
	{
		if(name2[i]=='\0'||name1[i]>name2[i])
			return 1;
		else if(name2[i]>name1[i])
			return -1;
	}
	return -1;
}

void set(char min[], char name[])
{
	int i;
	for(i=0;name[i]!='\0';i++)
		min[i]=name[i];
	min[i]='\0';
}
//Bubble Sort
void sort(char names[100][100], int N)
{
	int i,j,pos;
	char min[100],tmp[100];
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(compareTo(names[j],names[j+1])>0)
			{
				set(tmp,names[j]);
				set(names[j],names[j+1]);
				set(names[j+1],tmp);
			}
		}
	}
}

void print(char names[100][100], int N)
{
	int i;
	for(i=0;i<N;i++)
		printf("%s\n",names[i]);
}

int main()
{
	int i,N;
	char names[100][100];
	
	printf("Enter number of names\n");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Enter a name\n");
		scanf("%s",names[i]);
	}
	
	sort(names,N);
	printf("\nSorted:\n");
	print(names,N);
	
	return 0;
}
