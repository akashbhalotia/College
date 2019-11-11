import static java.lang.Math.*; //static import
class A
{
    private static double radius; //static global variable
    static //static block
    {
        radius=10;
    }
    static class Circle //static nested class
    {
        static void area() //static method
        {
            System.out.println("Area is "+PI*pow(radius,2)+" sq. units");
        }
    }
    public static void main(String[] args) //static method
    {
        Circle.area();
    }
}
