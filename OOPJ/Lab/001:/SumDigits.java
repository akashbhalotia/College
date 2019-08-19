/*
    Print the sum of digits of a number N, entered as a command-line argument.
 */

// Created by akashbhalotia
import java.util.Scanner;

class Runner
{
    private int a[],N,len,sum;

    public Runner(int N) //parameterized constructor
    {
        this.N=N;
        len=(int)(Math.log10(N))+1; //number of digits
        a=new int[len];
        sum=0;
    }
    public void solve() //solves the problem
    {
        int i,copy=N;

		//stores the digit in the appropriate position
		//and adds it to the sum.
        for(i=len-1;i>=0;i--)
        {
            a[i]=copy%10;
            copy/=10;

            sum+=a[i];
        }
    }
    public void display() //displays the answer computed
    {
        System.out.print("The sum of digits = ");
        for(int i=0;i<len-1;i++)
            System.out.print(a[i]+"+");
        System.out.print(a[len-1]);

        if(len>1)
            System.out.println("="+sum);
        else
            System.out.println();
    }
}
class SumDigits
{
    public static void main(String[] args)
    {
        Runner obj=new Runner(Integer.parseInt(args[0]));
        obj.solve();
        obj.display();
    }
}
