/*
    Find length of longest consecutive elements sequence in an unsorted array.
 */

// Created by akashbhalotia
import java.util.Scanner;

class LCES
{
    private int a[],N,ans;

    public void read() //reads user input
    {
        Scanner sc=new Scanner(System.in);
        int i;

        System.out.println("Enter the length of the array");
        N=sc.nextInt();
        a=new int[N];

        for(i=0;i<N;i++)
        {
            System.out.println("Enter a number");
            a[i]=sc.nextInt();
        }
    }
    public void sort() //Bubble Sort
    {
        int i,j,tmp;

        for(i=0;i<N-1;i++)
        {
            for(j=0;j<N-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }
    }
    public void solve() //solves the problem
    {
        int i,tmp=1;
        ans=1;

        sort();

        // Either extend a previous sequence if possible (tmp++)
        // or start a new sequence (tmp=1)
        for(i=1;i<N;i++)
        {
            if(a[i]==a[i-1]+1)
                tmp++;
            else
                tmp=1;
            ans=Math.max(ans,tmp);
        }
    }
    public void display() //displays the answer computed
    {
        System.out.println("Length of longest consecutive element sequence: "+ans);
    }
}
class Solver
{
    public static void main(String[] args)
    {
        LCES obj=new LCES();
        obj.read();
        obj.solve();
        obj.display();
    }
}
