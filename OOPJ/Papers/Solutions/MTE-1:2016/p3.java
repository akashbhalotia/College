// Created by akashbhalotia
import java.io.*;
import java.util.*;
class SortStrings
{
    private String[] a;
    private int N;

    public SortStrings(String a[], int N) //parameterized constructor
    {
        int i;
        this.N=N;
        this.a=new String[this.N];

        for(i=0;i<this.N;i++)
            this.a[i]=a[i];
    }
    public void sort() //Selection Sort
    {
        int i,j,pos;
        String tmp,max;

        for(i=0;i<N;i++)
        {
            max=a[i];
            pos=i;

            for(j=i+1;j<N;j++)
            {
                if(a[j].compareTo(max)>0)
                {
                    max=a[j];
                    pos=j;
                }
            }

            tmp=a[i];
            a[i]=a[pos];
            a[pos]=tmp;
        }
    }
    public void display() //Displays array
    {
        int i;
        for(i=0;i<N;i++)
            System.out.print(a[i]+",");
        System.out.println();
    }
}
class Driver //driver class
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        int i,N;

        System.out.println("Enter size of array");
        N=Integer.parseInt(br.readLine().trim());

        String a[]=new String[N];
        for(i=0;i<N;i++) //taking array input
        {
            System.out.println("Enter a string");
            a[i]=br.readLine().trim();
        }

        SortStrings obj=new SortStrings(a,N); //object creation

        System.out.println("Before sorting:");
        obj.display();

        obj.sort(); //sorting

        System.out.println("\nAfter sorting:");
        obj.display();
    }
}
