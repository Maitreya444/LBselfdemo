//Accept one number from user and if the number is less than 10 then print Hello or else print demo.
import java.util.*;
public class selfdemo70 
{
    public static void main(String[] args) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        if(iValue > 10)
        {
            System.out.println("HELLO");
        }
        else
        {
            System.out.println("Demo");
        }
        sobj.close();
    }    
}
