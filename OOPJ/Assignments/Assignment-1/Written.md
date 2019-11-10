**1) What do you mean by checked and unchecked exception? Explain it with suitable example.**  
```
    Checked exception are the exceptions that are checked at compile time. If some code within a method 
    throws a checked exception, then the method must either handle the exception or it must specify the 
    exception using throws keyword.  
    
    Unchecked are the exceptions that are not checked at compiled time. In Java exceptions under Error 
    and RuntimeException classes are unchecked exceptions, everything else under throwable is checked.
    
    Example: In the code below (see code-1 ), we need to specify the IOException in the throws list to
    make the program compile-time error free. This is an example of a checked exception.
    
    Example: The code below throws ArithmeticException when we run it. The compiler allows it to compile
    because ArithmeticException is an unchecked exception.
```
