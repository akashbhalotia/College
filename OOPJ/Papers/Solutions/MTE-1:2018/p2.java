// Created by akashbhalotia
import java.util.*;
class Fibonacci_series
{
    boolean check(int N)
    {
        if(N<1)
        {
            System.out.println("Invalid");
            return false;
        }
        else
        {
            System.out.println("Valid");
            return true;
        }
    }
    int getdata()
    {
        Scanner sc=new Scanner(System.in);
        return sc.nextInt();
    }
    int fibo(int N)
    {
        if(N==1)
            return 0;
        if(N==2)
            return 1;
        return fibo(N-1)+fibo(N-2);
    }
}
class fibonacci
{
    public static void main(String[] args)
    {
        Fibonacci_series f=new Fibonacci_series();
        int number=f.getdata();

        boolean test=f.check(number);
        while(!test)
        {
            number=f.getdata();
            test=f.check(number);
        }
        for(int i=1;i<=number;i++)
            System.out.print(f.fibo(i)+",");
    }
}
