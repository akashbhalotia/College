import java.util.Arrays;

interface Stack //interface
{
    void push(int data); //these 2 have to be implemented
    int pop();

    default void clear() //not compulsory to implement
    {
        System.out.println("Clear hasn't been implemented till now");
    }
}

//an implementation of our interface, where the clear method hasn't been implemented
class MyStack implements Stack
{
    private int stack[], top;
    public MyStack()
    {
        stack=new int[100];
        top=0;
    }
    public void push(int data)
    {
        stack[top++]=data;
    }
    public int pop()
    {
        return stack[top--];
    }
}

//an implementation of our interface, where the clear method has been implemented
class AlsoMyStack
{
    private int stack[], top;
    public AlsoMyStack()
    {
        stack=new int[100];
        top=0;
    }
    public void push(int data)
    {
        stack[top++]=data;
    }
    public int pop()
    {
        return stack[top--];
    }
    public void clear()
    {
        top=0;
        System.out.println("Stack cleared!");
    }
}
class Driver //driver class
{
    public static void main(String[] args)
    {
        //doesn't implement clear method
        MyStack MS=new MyStack();
        MS.push(1);
        MS.push(100);
        MS.pop();
        MS.clear();

        //implements clear method
        AlsoMyStack AMS=new AlsoMyStack();
        AMS.clear();
    }
}
