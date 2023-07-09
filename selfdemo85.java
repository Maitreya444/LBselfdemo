//Write a program which accept number from user and display all its non factors.
//Input  :  12
//Output :  5   7   8   9   10  11
import java.util.*;
class Number
{
    public int NonFactorial (int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt)!=0)
            {
                System.out.println(iCnt);
            }
        }
        return iCnt;
    }
}
public class selfdemo85 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            int iRet = nobj.NonFactorial(iValue);
            System.out.println("Non Factorials are"+iRet);
        }
        sobj.close();
    }    
}