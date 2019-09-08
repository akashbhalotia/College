// Created by akashbhalotia
public class Book
{
    String author_name,ISBN,Title;
    int price;

    private Book(String author_name, String ISBN)
    {
        this.author_name=author_name;
        this.ISBN=ISBN;
    }
    private Book(String author_name, String ISBN, String Title)
    {
        this(author_name,ISBN);
        this.Title=Title;
    }
    public Book(String author_name, String ISBN, String Title, int price)
    {
        this(author_name,ISBN,Title);
        this.price=price;
    }
    public boolean equals(Book obj)
    {
        return ISBN.equals(obj.ISBN);
    }
}
//////create this in a separate file, since both are public classes...
import java.io.*;
public class Library
{
    Book books[];
    public Library() throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int i,N;
        String author_name,ISBN,Title;
        int price;

        System.out.println("Enter number of books");
        N=Integer.parseInt(br.readLine().trim());

        books=new Book[N];
        for(i=0;i<N;i++)
        {
            System.out.println("Enter Author name, ISBN, Title and price");
            author_name=br.readLine().trim();
            ISBN=br.readLine().trim();
            Title=br.readLine().trim();
            price=Integer.parseInt(br.readLine().trim());

            books[i]=new Book(author_name,ISBN,Title,price);
        }
    }
    public boolean searchBook(Book obj)
    {
        for(int i=0;i<books.length;i++)
        {
            if(obj.equals(books[i]))
                return true;
        }
        return false;
    }
    public Book expensiveBook(Book obj, Book obj1)
    {
        return (obj.price>obj1.price)?obj:obj1;
    }
}
