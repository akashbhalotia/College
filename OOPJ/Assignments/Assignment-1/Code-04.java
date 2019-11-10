/*
    Private constructor. Singleton class.
    Design your own scenario where this concept is required.
    I have made a program, simulating an attendance sheet,
    where the students enter their names.
 */

//created by Whiplash99
import java.io.*;
class AttendanceSheet //singleton class
{
    private static AttendanceSheet instance=null; //single instance of the class
    private String names[]; //array to store names of students who are present
    private int count; //counts the number of students present
    private AttendanceSheet() //private constructor
    {
        names=new String[100];
        count=0;
    }
    public static AttendanceSheet getInstance() //factory method
    {
        if(instance==null)
            instance=new AttendanceSheet();
        return instance;
    }
    public void addName(String name) //add a name
    {
        names[count++]=name;
    }
    public void displaySheet() //display the attendance sheet
    {
        System.out.println("As per attendance sheet...");
        System.out.println("Total number of students present = "+count);

        if(count>0)
        {
            System.out.println("Names: ");
            for (int i = 0; i < count; i++)
                System.out.println((i + 1) + ") " + names[i]);
        }
    }
}
class Driver //driver class
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("You shall enter names one by one. To stop, enter \"Done\".");
        while(true)
        {
            System.out.println("Enter a name");
            String name=br.readLine().trim();
            if(name.equalsIgnoreCase("Done"))
                break;

            AttendanceSheet obj=AttendanceSheet.getInstance();
            obj.addName(name); //add a name to the sheet
        }
        AttendanceSheet obj=AttendanceSheet.getInstance();
        obj.displaySheet(); //display the sheet
    }
}
