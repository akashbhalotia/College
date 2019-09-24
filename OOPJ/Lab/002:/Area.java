/*
    WAP that displays the area of different figures using method overloading.
    (Square, rectangle, triangle).

    Assuming valid triangle (I'm lazy :( )
    Can check for condition for valid triangle:
    a+b>c,b+c>a,c+a>b.
    a>0 && b>0 && c>0

    Assuming valid square and rectangle (sides should be positive).
 */

//created by akashbhalotia
import java.util.Scanner;
class Shapes
{
    private double area; //data member
    public Shapes() //default constructor
    {

    }
    public void calcArea(double a) //area of a square
    {
        area=a*a;
    }
    public void calcArea(double a, double b) //area of a rectangle
    {
        area=a*b;
    }
    public void calcArea(double a, double b, double c) //area of a triangle
    {
        double semi=(a+b+c)/2;
        area=Math.sqrt(semi*(semi-a)*(semi-b)*(semi-c));
    }
    public void display() //displays the area
    {
        System.out.println("Area is: "+area+" square units");
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        double a,b,c;

        System.out.println("SQUARE:");
        Shapes square=new Shapes();

        System.out.println("Enter the length of a side of a square");
        a=sc.nextDouble();

        square.calcArea(a);
        square.display();

        System.out.println("\nRECTANGLE:");
        Shapes rectangle=new Shapes();

        System.out.println("Enter the length and breadth of the rectangle");
        a=sc.nextDouble();
        b=sc.nextDouble();

        rectangle.calcArea(a,b);
        rectangle.display();

        System.out.println("\nTRIANGLE:");
        Shapes triangle=new Shapes();

        System.out.println("Enter 3 sides of the triangle");
        a=sc.nextDouble();
        b=sc.nextDouble();
        c=sc.nextDouble();

        triangle.calcArea(a,b,c);
        triangle.display();
    }
}
