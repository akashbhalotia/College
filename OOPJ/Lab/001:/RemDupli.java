// Created by akashbhalotia
import java.util.Scanner;

class RemDupli
{
    private int a[],N,ans;

    public void read() //reads user input
    {
        Scanner sc=new Scanner(System.in);
        int i;

        System.out.println("Enter original length of array");
        N=sc.nextInt();
        a=new int[N];

        for(i=0;i<N;i++)
        {
            System.out.println("Enter a number");
            a[i]=sc.nextInt();
        }
    }
    public void solve() //solves the problem
    {
        int i,j,count=0;

        // For every array element, check if it has occurred before in the array.
        for(i=0;i<N;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    break;
                }
            }
        }
        ans=N-count;
    }
    public void display() //displays the answer computed
    {
        System.out.println("Length after removal of duplicates: "+ans);
    }
}
class Solver
{
    public static void main(String[] args)
    {
        RemDupli obj=new RemDupli();
        obj.read();
        obj.solve();
        obj.display();
    }
}
