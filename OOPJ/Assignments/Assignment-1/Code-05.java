// created by Whiplash99
class LessBalanceException extends Exception //Custom exception
{
    LessBalanceException(){}
    public String toString()
    {
        return "Withdraw amount is not valid!";
    }
}
class Account //Bank account class
{
    private int bal; //current balance
    Account() //default constructor
    {
        bal=10_000; //minimum balance
    }
    public void deposit(int amt) //deposit an amount
    {
        bal+=amt;
        displayBal();
    }
    public void withdraw(int amt) throws LessBalanceException //may throw an exception
    {
        if(amt>bal)
            throw new LessBalanceException();
        else
        {
            bal-=amt;
            displayBal();
        }
    }
    public void displayBal() //displays the balance 
    {
        System.out.println("Your balance is Rs. "+bal);
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        Account Saitama=new Account(); //2 accounts
        Account Kira=new Account();

        Saitama.deposit(1000);

        try //these statements may throw an exception
        {
            Kira.withdraw(100);
            Kira.withdraw(1_000_000);
        }
        catch (LessBalanceException LBE) //exception caught!
        {
            System.out.println(LBE.toString());
        }
    }
}
