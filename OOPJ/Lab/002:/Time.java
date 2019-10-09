/*
    Constructor overloading. Object as an argument. Add two times. Then display in format of HH:MM:SS
 */

//created by akashbhalotia
import java.util.*;
class Time
{
    private int hours,minutes,seconds; //data members
    public Time(){} //constructor overloading
    public Time(int hours, int minutes, int seconds) //parameterised constructor
    {
        this.hours=hours;
        this.minutes=minutes;
        this.seconds=seconds;
    }
    public void add(Time t1, Time t2) //object as an argument
    {
        seconds=(t1.seconds+t2.seconds)%60;
        minutes=(t1.minutes+t2.minutes+(t1.seconds+t2.seconds)/60)%60;
        hours=(t1.hours+t2.hours+(t1.minutes+t2.minutes)/60)%60;
    }
    public void display() //displays time in proper format
    {
        System.out.println(hours+":"+minutes+":"+seconds);
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter number of hours, minutes and seconds for Time 1");
        int hours=sc.nextInt();
        int minutes=sc.nextInt();
        int seconds=sc.nextInt();
        Time t1=new Time(hours,minutes,seconds);

        System.out.println("\nEnter number of hours, minutes and seconds for Time 2");
        hours=sc.nextInt();
        minutes=sc.nextInt();
        seconds=sc.nextInt();
        Time t2=new Time(hours,minutes,seconds);

        Time total=new Time(); //overloaded call
        total.add(t1,t2);

        System.out.println("\nTotal time: ");
        total.display();
    }
}
