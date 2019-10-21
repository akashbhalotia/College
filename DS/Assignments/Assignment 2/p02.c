// created by Whiplash99

/*
    WAP to read marks of 50 students ranged between 0 to 10 (inclusive),
    and find the frequency of each mark.
 */
#include<stdio.h>
int main()
{
    int freq[11]={0},num;
    for(int i=0;i<50;i++)
    {
        printf("Enter marks\n"); //input
        scanf("%d",&num);

        freq[num]++; //frequency array
    }

    for(int i=0;i<=10;i++)
    {
        if(freq[i]) //if non-zero frequency.
            printf("Frequency of %d is: %d\n",i,freq[i]);
    }
    return 0;
}
