//Write a program which accept one number from user and check wheather that number is greater tham 100 or not.
//Input : 101
//Output : Greater
import java.util.*;
class ChkGreater
{
    public boolean Check(int iNo)
    {
        if(iNo > 100)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class selfdemo95 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter a Number");
        int iValue = sobj.nextInt();

        ChkGreater cobj = new ChkGreater();
        {
            boolean bRet = cobj.Check(iValue);

            if(bRet == true)
            {
                System.out.println("Greater");
            }
            else
            {
                System.out.println("Smaller");
            }
        }
        sobj.close();
    }    
}