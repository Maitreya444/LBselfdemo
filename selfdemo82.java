//Write a program which accept number from user and display its factor in decreasing order.
//Input :   12
//Output:   6   4   3   2   1
import java.util.*;
class Number 
{
    public int Factorial(int iNo) 
    {
        int iCnt = 0;
        for(iCnt = iNo/2; iCnt <= iNo; iCnt--)
        {   
            if((iNo % iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
        return iCnt;
    }
    
}
public class selfdemo82 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Number nobj = new Number();
        {
            int iRet =  nobj.Factorial(iValue);
            System.out.println("Factorial is :"+iRet);
        }
        sobj.close();
    }
}
