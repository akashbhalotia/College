/*
Print all prime numbers upto N.
 */

//created by akashbhalotia
import java.util.*;
class Pattern
{
    private int N; //data member

    public Primes(int N) //parameterised constructor
    {
        this.N=N;
    }
    private boolean isPrime(int N) //checks if N is a prime number
    {
        int c=0;

        for(int i=1;i<=N;i++)
        {
            if(N%i==0)
                c++;
        }
        return (c==2);
    }
    public void printPrimes() //prints all primes till N (inclusive)
    {
        System.out.println("Primes till "+N+":");
        for(int i=1;i<=N;i++)
        {
            if(isPrime(i))
                System.out.println(i);
        }
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int N=sc.nextInt();

        Primes obj=new Primes(N);
        obj.printPrimes();
    }
}
