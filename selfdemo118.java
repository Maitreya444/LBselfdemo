//Write a program which accept number from user and display its digits in reverse.
//Input : 2395
//Output : 5932
import java.util.*;
class Reverse 
{
    public int Ulta(int iNo)
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }
        
        int iDigit = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
        return iDigit;
    }
}
public class selfdemo118
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Reverse robj = new Reverse();
        {
            int iRet = robj.Ulta(iValue);
            System.out.println(iRet);
        }
        sobj.close();
    }
}