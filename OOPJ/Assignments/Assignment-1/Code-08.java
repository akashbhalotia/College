package First;

public class InvalidRollException extends Exception
{
    public InvalidRollException(){}
    public String toString()
    {
        return "Invalid roll number!";
    }
}

//////////////////////////////////////////////////////////////////////////////
package First;

public interface Info
{
    String college_name="MUJ";
    void Calculate_performance();
}

//////////////////////////////////////////////////////////////////////////////
package First;

public class Student_basic
{
    private String Student_name, Father_name, city;
    private long mobileNum;
    private int roll;

    protected Student_basic(String n, String f, String c, long mob, int r)
    {
        Student_name=n;
        Father_name=f;
        city=c;
        mobileNum=mob;
        roll=r;
    }
    public void show_basic() throws InvalidRollException
    {
        System.out.println("Student name: "+Student_name);
        System.out.println("Father's name: "+Father_name);
        System.out.println("City: "+city);
        System.out.println("Mobile number: "+mobileNum);
        System.out.println("Roll number: "+roll);

        int copy=roll,count=0;
        while (copy>0)
        {
            copy/=10;
            count++;
        }
        if(count<3)
            throw new InvalidRollException();
        System.out.println();
    }
}

//////////////////////////////////////////////////////////////////////////////
package second;
import First.*;

class Academic extends Student_basic implements Info
{
    private int m1,m2,m3;
    public Academic(String n, String f, String c, long mob, int r, int m1, int m2, int m3)
    {
        super(n,f,c,mob,r);

        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    public void Calculate_performance()
    {
        double avg=(double)(m1+m2+m3)/3;
        System.out.println("Average marks = "+avg);
    }
    public void show_basic() throws InvalidRollException
    {
        super.show_basic();
        System.out.println("Marks 1: "+m1);
        System.out.println("Marks 2:"+m2);
        System.out.println("Marks 3:"+m3);
        Calculate_performance();
        System.out.println();
    }
}
class Sports extends Student_basic
{
    private double height, weight;
    private String game;

    public Sports(String n, String f, String c, long mob, int r, double h, double w, String g)
    {
        super(n,f,c,mob,r);
        height=h;
        weight=w;
        game=g;
    }
    public void show_basic() throws InvalidRollException
    {
        super.show_basic();
        System.out.println("Height: "+height);
        System.out.println("Weight: "+weight);
        System.out.println("Game: "+game);
        System.out.println();
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Student_basic Morty=new Academic("Morty","Jerry", "Citadel",100,420,100,91,90);
        Student_basic Beth=new Sports("Beth","Rick","Citadel",99,69,1.8,70,"Chess");

        try
        {
            Morty.show_basic();
            Beth.show_basic();
        }
        catch (InvalidRollException IRE)
        {
            System.out.println(IRE.toString());
        }
    }
}
