//Write a program which accepts N from user and print all odd numbers up to N.
//Input : 18
//Output: 1 3 5 7 8 9 11 13 15 17
import java.util.*;
class selfdemo113 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        int iCnt = 0;
        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
        if((iCnt % 2)!=0)
        {
            System.out.println(iCnt);
        }
        sobj.close();
        }    
    }
}