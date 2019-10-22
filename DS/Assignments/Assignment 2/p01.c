// created by Whiplash99

/*
    WAP to input 10 integers and print all pairs whose sum = 70
    Assumptions:
    1) Print unique pair only once.
    2) Print only positive pairs.
    This can be done in O(NlogN) if we want to remove EVERY limitation,
    but I am too tired to code any O(NlogN) sort now.
 */
#include<stdio.h>
int main() //O(N), but with limitations.
{
    int exists[75]={0},done[75]={0},num;
    for(int i=0;i<2;i++)
    {
        printf("Enter a number\n"); //input
        scanf("%d",&num);

        if(0<=num&&num<=70) //limitation
        {
            exists[num]++;
            if(exists[70-num])
            {
                if(num!=35)
                    done[num]=done[70-num]=done[num]+1;
                else if(exists[num]>1)
                    done[num]++;
            }
        }
    }
    printf("All positive pairs which add up to 70:\n");
    for(int i=0;i<=35;i++) //printing the pairs.
    {
        if(done[i])
            printf("%d %d\n",i,(70-i));
    }

    return 0;
}
