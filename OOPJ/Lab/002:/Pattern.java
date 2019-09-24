/*
    Print pattern:

    ******
    *****
    ****
    ***
    **
    *
 */

class Pattern
{
    private int N; //data member

    public Pattern(int N) //parameterised constructor
    {
        this.N=N;
    }
    public void printPattern() //prints the pattern
    {
        for(int i=6;i>=1;i--) //rows
        {
            for(int j=1;j<=i;j++) //columns
                System.out.print("*");
            System.out.println();
        }
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Pattern obj=new Pattern(6);
        obj.printPattern();
    }
}
