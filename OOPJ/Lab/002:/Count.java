/*
    WAP to count the number of objects created using a static variable.
 */

//created by akashbhalotia
class Count
{
    private static int counter=0; // counts number of objects created.

    public Count() //increments counter everytime an object is created
    {
        ++counter;
        System.out.println("Object number "+counter+" created.");
    }
    public static int getCounter() //returns the value of counter.
    {
        return counter;
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Count obj1=new Count();
        Count obj2=new Count();
        Count obj3=new Count();
        Count obj4=new Count();

        System.out.println("\nNumber of objects created: "+Count.getCounter());
    }
}
