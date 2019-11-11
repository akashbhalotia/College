package First;

public class InvalidRollException extends Exception //custom exception
{
    public InvalidRollException(){}
    public String toString() //will print this message when needed
    {
        return "Invalid roll number!";
    }
}

//////////////////////////////////////////////////////////////////////////////
package First;

public interface Info //interface
{
    String college_name="MUJ"; //final by default
    void Calculate_performance(); //we'll need to implement this
}

//////////////////////////////////////////////////////////////////////////////
package First;

public class Student_basic //base class
{
    private String Student_name, Father_name, city; //data members of base class
    private long mobileNum;
    private int roll;

    //parameterized constructor
    protected Student_basic(String n, String f, String c, long mob, int r) 
    {
        Student_name=n;
        Father_name=f;
        city=c;
        mobileNum=mob;
        roll=r;
    }
    
    //will be overridden
    public void show_basic() throws InvalidRollException
    {
        System.out.println("Student name: "+Student_name);
        System.out.println("Father's name: "+Father_name);
        System.out.println("City: "+city);
        System.out.println("Mobile number: "+mobileNum);
        System.out.println("Roll number: "+roll);

        //checking if roll number is valid or not
        //counting number of digits in the roll number.
        int copy=roll,count=0;
        while (copy>0)
        {
            copy/=10;
            count++;
        }
        
        //throwing our custom exception
        if(count<3)
            throw new InvalidRollException();
        System.out.println();
    }
}

//////////////////////////////////////////////////////////////////////////////
package second;
import First.*;

//subclass
class Academic extends Student_basic implements Info
{
    private int m1,m2,m3; //data memebers of subclass
    
    //parameterized constructor
    public Academic(String n, String f, String c, long mob, int r, int m1, int m2, int m3)
    {
        super(n,f,c,mob,r);

        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    
    //implementing the method which was present in Info
    public void Calculate_performance()
    {
        double avg=(double)(m1+m2+m3)/3;
        System.out.println("Average marks = "+avg);
    }
    
    //overriding the method of base class
    public void show_basic() throws InvalidRollException
    {
        System.out.println("College: "+college_name);
        super.show_basic();
        System.out.println("Marks 1: "+m1);
        System.out.println("Marks 2:"+m2);
        System.out.println("Marks 3:"+m3);
        Calculate_performance();
        System.out.println();
    }
}

//subclass
class Sports extends Student_basic implements Info
{
    private double height, weight; //data memebers of subclass
    private String game;

    //parameterized constructor
    public Sports(String n, String f, String c, long mob, int r, double h, double w, String g)
    {
        super(n,f,c,mob,r);
        height=h;
        weight=w;
        game=g;
    }
    
    //implementing the method which was present in Info
    public void Calculate_performance()
    {
        System.out.println("Neither height, nor weight is correlated with Chess :p");
    }
    
    //overriding the method of base class
    public void show_basic() throws InvalidRollException
    {
        System.out.println("College: "+college_name);
        super.show_basic();
        System.out.println("Height: "+height);
        System.out.println("Weight: "+weight);
        System.out.println("Game: "+game);
        Calculate_performance();
        System.out.println();
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        //2 students
        Student_basic Morty=new Academic("Morty","Jerry", "Citadel",100,420,100,91,90);
        Student_basic Beth=new Sports("Beth","Rick","Citadel",99,69,1.8,70,"Chess");

        try //these lines of code may throw an exception
        {
            Morty.show_basic();
            Beth.show_basic();
        }
        catch (InvalidRollException IRE) //exception handling
        {
            System.out.println(IRE.toString());
        }
    }
}
