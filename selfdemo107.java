import java.util.*;

class selfdemo107
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a number");
        int iValue = sobj.nextInt();

        int iCnt = 0;
        for(iCnt = 1; iCnt <= iValue; iCnt++)
        {
            System.out.println(iCnt);
        }
        sobj.close();
    }
}