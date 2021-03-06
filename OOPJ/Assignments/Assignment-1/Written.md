**1) What do you mean by checked and unchecked exception? Explain it with suitable example.**  
```
    Checked exception are the exceptions that are checked at compile time. If some code within a 
    method throws a checked exception, then the method must either handle the exception or it must
    specify the exception using throws keyword.  
    
    Unchecked are the exceptions that are not checked at compiled time. In Java exceptions under 
    Error and RuntimeException classes are unchecked exceptions, everything else under throwable
    is checked.
    
    Example: In the code below (see code-1 ), we need to specify the IOException in the throws 
    list to make the program compile-time error free. This is an example of a checked exception.
    
    Example: The code below (see code-2) throws ArithmeticException when we run it. The compiler
    allows it to compile because ArithmeticException is an unchecked exception.
```  

**2) What is the difference between method overloading and overriding? Explain with suitable example.**  
```
    Method overloading occurs when two of more methods in a class have the same name, but different 
    number or different types of parameters. 
    
    Method overriding is when a method of the subclass provides a specific implementation of a 
    method of the superclass. 
    
    Example: In the code below (see code-3),the method fun1 is overloaded, while the method fun2
    inside in the class Sub overrides the method fun2 inside the class Base.
```  

**3) What is the difference between final, finally, and finalize?**  
```
    Final is used to apply restrictions on class, method and variable. Final class can't be inherited,
    final method can't be overridden and final variable value can't be changed.  
    
    Finally block is used to place important code. It will be executed whether exception is handled 
    or not.  
    
    Finalize is used to perform clean up processing just before object is garbage collected.
```  

**4) What do you mean by singleton class and factory method? Exaplain with suitable examples.**  
```
    A singleton class is a class that can have only one object at a time. This is useful when exactly
    one object is needed to coordinate actions across the system.
    
    A factory method is related to object creation. In Factory pattern, we create object without 
    exposing the creation logic to client and the client uses the same common interface to create a
    new type of object.
    The idea is to use a static member-function (static factory method) which creates & returns 
    instances, hiding the details of class modules from user.
    
    Refer to the code below (code-4) for an example.
```  

**5) Write a program, as specified in the assignment, creating a custom exception class.**  
```
    Refer to the code below (see code-5).
```

**6) Write a program for banking system, as specified in the assignment.**  
```
    Refer to the code below (see code-6).
```

**7) a) Abstract class vs interface.**  
```
    Interfaces are implicitly abstract and cannot have implementations, while abstract class 
    can have instance methods that implements a default behavior.
    
    Variables declared in a Java interface is by default final. An  abstract class may contain
    non-final variables.
    
    Members of a Java interface are public by default. A Java abstract class can have the usual 
    flavors of class members like private, protected, etc..
    
    A Java class can implement multiple interfaces but it can extend only one abstract class.
```

**7) b) Can we implement one interface into another?  c) Can we extend one interface into another?**
```
    An interface can extend another interface but cannot implement it, because the interface will not 
    contain the implementation (we cannot provide implementation in the interface). So we
    can just extend it but not implement it.
```

**7) d) Can we inherit a class into another interface?**  
```
    No, we cannot inherit a class into an interface.
```

**8) Program involving all uses of static keyword.**
```
    Refer to the code below (see code-7).
```
    
**9) Program involving packages, interfaces, inheritance and exceptions.**
```
    Refer to the code below (see code-8).
```

**10) What is the diamond problem? Provide a solution for it.**
```
    The "diamond problem" is an ambiguity that arises when two classes B and C inherit from A,
    and class D inherits from both B and C. If there is a method in A that B and C have overridden,
    and D does not override it, then which version of the method does D inherit: that of B, or
    that of C?
    
    To deal with the diamond problem, Java doesn't support multiple inheritance of classes. Java 8
    supports default methods where interfaces can provide default implementation of methods. And a
    class can implement two or more interfaces. In case both the implemented interfaces contain
    default methods with same method signature, the implementing class should explicitly specify
    which default method is to be used or it should override the default method.
```

**11) Explain all uses of super keyword in java**
```
    - super can be used to refer immediate parent class instance variable.
    - super can be used to invoke immediate parent class method.
    - super() can be used to invoke immediate parent class constructor.
```

**12) Program involving try, catch, throw, throws, finally.**
```
    Refer to the code below (see code-9).
```

**13) Explain nested/inner classes with a suitable example.**  
```
    When we define a class within another class, such classes are called nested classes.
    
    Refer for the code below (see code-10) for an example.
```

**14) Program involving default method in an interface**
```
    Before Java 8, interfaces could have only abstract methods. The implementation
    of these methods had to be provided in a separate class. So, if a new method is
    to be added in an interface, then its implementation code had to be provided in
    the class implementing the same interface. To overcome this issue, Java 8
    introduced the concept of default methods which allow the interfaces to have methods
    with implementation without affecting the classes that implement the interface.
    
    Refer to the code below (see code-11).
```
