//Write a program which accept name from user and print that name.
//Input : Maitreya Gangurde
//Output : Maitreya Gangurde
import java.util.*;
class selfdemo92
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter your full name");
        String Name = sobj.nextLine();

        System.out.println("Your name is "+Name);

        sobj.close();
    }
}