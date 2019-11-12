class Outer //Outer class
{
    private int val=10;
    class Inner //Inner class
    {
        public void show()
        {
            System.out.println(val);
        }
    }
    public void show()
    {
        Inner obj=new Inner();
        obj.show();
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Outer obj=new Outer();
        obj.show();
    }
}
