// created by Whiplash99
abstract class Bank //abstract class. abstract methods need to be overridden
{
    protected double bal,rate;
    protected abstract void deposit(int amt);
    protected abstract void withdraw(int amt);
    protected final void SI(double time) //can't be overridden
    {
        System.out.println("Simple interest is Rs."+(bal*Math.pow((1+rate/100),time)));
    }
    protected final void show() //can't be overridden
    {
        System.out.println("Your balance is Rs. "+bal);
    }
}
class SBI extends Bank
{
    public SBI() //default constructor
    {
        bal=10_000; //min balance
        rate=10.0; //rate of interest
    }
    public void deposit(int amt) //overriding deposit
    {
        bal+=amt;
        show();
    }
    public void withdraw(int amt) //overriding withdraw
    {
        if(bal<amt)
            System.out.println("Insufficient balance!");
        else
        {
            bal-=amt;
            show();
        }
    }
}
class Axis extends Bank
{
    private final int bonus=10,penalty=20;
    public Axis() //default constructor
    {
        bal=1_000; //min balance
        rate=20.0; //rate of interest
    }
    public void deposit(int amt) //overriding deposit
    {
        bal+=amt+bonus;
        show();
    }
    public void withdraw(int amt) //overriding withdraw
    {
        if(bal<amt)
        {
            System.out.println("Insufficient balance!");
            bal-=penalty;
        }
        else
        {
            bal-=amt;
            show();
        }
    }
}
class IDFC extends Bank
{
    private final int transCost=150; //transaction cost
    public IDFC() //default constructor
    {
        bal=100;
        rate=25.0;
    }
    public void deposit(int amt) //overriding deposit
    {
        bal+=amt-transCost;
        show();
    }
    public void withdraw(int amt) //overriding withdraw
    {
        if(bal<amt)
            System.out.println("Insufficient balance!");
        else
        {
            bal-=amt-transCost;
            show();
        }
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        //polymorphism
        System.out.println("SBI bank"); //SBI bank
        Bank A=new SBI();
        A.deposit(100);
        A.withdraw(200);
        A.SI(2);
        A.show();
        System.out.println();

        System.out.println("Axis bank"); //Axis bank
        Bank B=new Axis();
        B.deposit(100);
        B.withdraw(200_000_000);
        B.SI(2);
        B.show();
        System.out.println();

        System.out.println("IDFC bank"); //IDFC bank
        Bank C=new IDFC();
        C.deposit(10000);
        C.withdraw(200);
        C.SI(2);
        C.show();
        System.out.println();
    }
}
