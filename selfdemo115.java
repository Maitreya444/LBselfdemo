//Write a program which accpet N and print first 5 numbers of N
//Input : 4
//Output: 4  8  12  16  20
import java.util.*;
public class selfdemo115 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        int iCnt = 0;
        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            System.out.println(iValue * iCnt);
        }
        sobj.close();
    }
}
