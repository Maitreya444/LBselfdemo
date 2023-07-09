//Write a program which accept a number from user and return summation of its non factors
//Input : 12
//Output: 50
import java.util.*;
class Numbers
{
    public int SumNonFactorial(int iNo)
    {
        int iCnt = 0;
        int iAdd = 0;
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt)!=0)
            {
                System.out.println(iCnt);
                iAdd = iAdd + iCnt;
            }
        }
        return iAdd;
    }
}
public class selfdemo88 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number ");
        int iValue = sobj.nextInt();

        Numbers nobj = new Numbers();
        {
            int iRet = nobj.SumNonFactorial(iValue);
            System.out.println("Summation of non factorial is :"+iRet);
        }
        sobj.close();
    }    
}
