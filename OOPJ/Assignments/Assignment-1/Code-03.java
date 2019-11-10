// created by Whiplash99
class Base
{
    void fun2()
    {
        System.out.println("Will be overridden");
    }
}
class Sub extends Base
{
    void fun1()
    {
        System.out.println("Overloading");
    }
    void fun1(int a)
    {
        System.out.println(a);
    }
    void fun2()
    {
        System.out.println("Overriding");
    }
}
