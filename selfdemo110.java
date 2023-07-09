//Write a program which accept number from user and print its number line.
//Input : 4
//Output: -4  -3  -2  -1   0   1   2   3   4
import java.util.*;
class selfdemo110 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        int iCnt = 0;
        for(iCnt = -iValue; iCnt<=iValue; iCnt++)
        {
            System.out.println(iCnt);
        }
        sobj.close();
    }    
}
