import java.io.*;

class ExceptionHandling //will throw  exceptions
{
    public void AE() throws ArithmeticException
    {
        int a=10,b=0,c=a/b;
    }
    public void AIOOBE() throws ArrayIndexOutOfBoundsException
    {
        int a[]=new int[10];
        int b=a[10];
    }
    public void NFE() throws NumberFormatException
    {
        Integer.parseInt("abc");
    }
    public void SIOOBE() throws StringIndexOutOfBoundsException
    {
        String s="Light";
        s.charAt(10);
    }
    public void NASE() throws NegativeArraySizeException
    {
        int a[]=new int[-5];
    }
    public void CNFE() throws ClassNotFoundException
    {
        throw new ClassNotFoundException();
    }
}
class Driver //driver class
{
    public static void main(String[] args) throws IOException
    {
        ExceptionHandling obj=new ExceptionHandling();
        FileOutputStream fos=null;

        //exception handling
        try
        {
            obj.AE();
        }
        catch (ArithmeticException AE)
        {
            System.out.println("Arithmetic Exception caught!");
        }

        try
        {
            obj.AIOOBE();
        }
        catch (ArrayIndexOutOfBoundsException AIOOBE)
        {
            System.out.println("ArrayIndexOutOfBoundsException caught!");
        }

        try
        {
            obj.NFE();
        }
        catch (NumberFormatException NFE)
        {
            System.out.println("NumberFormatException caught!");
        }

        try
        {
            obj.NASE();
        }
        catch (NegativeArraySizeException NASE)
        {
            System.out.println("NegativeArraySizeException caught!");
        }

        try
        {
            obj.CNFE();
        }
        catch (ClassNotFoundException CNFE)
        {
            System.out.println("ClassNotFoundException caught!");
        }

        try
        {
            obj.SIOOBE();
        }
        catch (StringIndexOutOfBoundsException AE)
        {
            System.out.println("StringIndexOutOfBoundsException caught!");
        }

        try
        {
            fos=new FileOutputStream("test.txt");

        }
        catch (FileNotFoundException FNFE) 
        {
            System.out.println("FileNotFoundException caught!");
        }
        finally
        {
            if(fos!=null)
                fos.close();
            System.out.println("File closed.");
        }
    }
}
