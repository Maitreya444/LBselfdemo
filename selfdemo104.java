//Write a program which accept number from user and print that number of $  &  * on screen.
//Input : 3
//Output: $ & * $ & * $ & *  

import java.util.*;

class Pattern
{
    public int Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            System.out.println("$   &   *");
        }
        return iNo;
    }
}

public class selfdemo104 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        {
            int iRet = pobj.Display(iValue);

            System.out.println("Pattern is :"+iRet);
        }
        sobj.close();
    }    
}
