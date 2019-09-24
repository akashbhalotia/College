/*
   Sort an array using bubble sort.
 */

//created by akashbhalotia
import java.util.Scanner;
class Sorting
{
    private int N; //data members
    private int[] a;

    public Sorting() //constructor taking the input
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter array size");
        N=sc.nextInt();
        a=new int[N];

        for(int i=0;i<N;i++)
        {
            System.out.println("Enter a number");
            a[i]=sc.nextInt();
        }
    }
    public void sort() //sorts the array
    {
        int tmp;

        for(int i=0;i<N;i++)
        {
            for(int j=i;j<N-i-1;j++)
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
    public void display() //displays the array
    {
        for(int i=0;i<N;i++)
            System.out.print(a[i]+",");
        System.out.println();
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Sorting obj=new Sorting();

        System.out.println("Array before sorting:");
        obj.display();

        obj.sort();

        System.out.println("Array after sorting:");
        obj.display();
    }
}
