//Accept two numbers from user and display first number in second number of times.
// Input : 12   5
//Output : 12   12  12  12  12

import java.util.*;

public class selfdemo73 
{
    public static void main(String[] args) 
    {   
        int iValue = 0;
        int iCount = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number 1");
        iValue = sobj.nextInt();

        System.out.println("Enter Count");
        iCount = sobj.nextInt();

        int iCnt = 0;
        for(iCnt = 0; iCnt < iCount; iCnt ++)
        {
            System.out.print(iValue);
        }
        sobj.close();
    }    
}
