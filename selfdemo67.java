//Accept one number from user and print that number of * on the screen

import java.util.*;

public class selfdemo67 
{
    public static void main(String[] args) 
    {   
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number");
        iValue = sobj.nextInt();
        
        for(int iCnt = 0; iCnt <= iValue; iCnt++)
        {
            System.out.println("*");
        }
        sobj.close();
    }    
}
