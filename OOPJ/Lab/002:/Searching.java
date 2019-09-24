/*
   Search for an element using binary search.
   Assuming array is sorted.
 */

//created by akashbhalotia
import java.util.Scanner;
class Search
{
    private int N; //data members
    private int[] a;

    public Search() //constructor taking the input
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
    public int binSearch(int key) //binary search
    {
        int l=0,r=N-1,mid;

        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==key)
                return mid;
            else if(a[mid]<key)
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        Search obj=new Search();
        System.out.println("Enter a number to be searched");
        int key=sc.nextInt();

        int pos=obj.binSearch(key);
        if(pos==-1)
            System.out.println("Element not present!");
        else
            System.out.println("Element present at index (0-indexed): "+pos);
    }
}
