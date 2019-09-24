/*
    WAP to calculate gross salary and net salary based on stuff given in the question.

    REMEMBER!!!
    ***********
    1) Basic salary: Fixed amount that the employee gets. Pure, fixed salary. Without adding any benefits
       or deducting any taxes.

    2) Gross salary: Salary after adding benefits.
       Gross salary = basic + benefits.

    3) Net salary: In-hand. Take-home. Actual amount that's left. AFTER DEDUCTING TAXES.
       Net salary = gross salary - taxes.

    4) THINGS TO ADD! (Mainly HRA, DA, CCA)
       DA, HRA, CCA, LTA, conveyance allowance, travel, medical, entertainment,
       bonus, overtime, any type of allowance.
       (Also almost any thing that ends with an 'A' in abbreviation.)

    5) THINGS TO SUBTRACT! (Mainly PF, PT)
       Taxes, PF, PT, ESIC, any type of taxes or deductions.
 */

// created by akashbhalotia
import java.io.*;
class Employee
{
    private static int counter=0; //to assign empNum
    private int empNum; //data members
    private double basic,gross,net;
    private String name;

    public Employee(String name, double basic) //parameterized constructor
    {
        empNum=++counter;
        this.name=name;
        this.basic=basic;
        gross=net=0.0;
    }
    public void calcSalary() //calculates gross and net
    {
        double DA,HRA,PF;
        final double CCA=240,PT=100;

        DA=basic/2; //allowances
        HRA=basic/4;

        PF=basic/10; //deductions

        gross=basic+HRA+DA+CCA;
        net=gross-PF-PT;
    }
    public void display() //displays employee details
    {
        System.out.println("Name: "+name);
        System.out.println("Employee number: "+empNum);

        System.out.println("Basic salary: Rs. "+basic);
        System.out.println("Gross salary = Rs. "+gross);
        System.out.println("Net salary = Rs. "+net);
    }
}
class Driver //driver class
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter name"); //input details
        String name = br.readLine().trim();
        System.out.println("Enter basic salary");
        double basic = Double.parseDouble(br.readLine().trim());

        Employee e1=new Employee(name, basic); //object creation
        e1.calcSalary();
        e1.display();
    }
}
