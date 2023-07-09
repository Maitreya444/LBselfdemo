//Write a program which accept 3 numbers and print its multiplication
//Input :   5   4   7
//Output:   140
import java.util.*;
class Check
{
    public int Domulti(int iNo1, int ino2, int iNo3)
    {
       int iAns = 0;
       iAns =  iNo1 * ino2 * iNo3;

       return iAns;
    }
    
}
public class selfdemo101 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number 1");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number 2");
        int iValue2 = sobj.nextInt();

        System.out.println("Enter number 3");
        int iValue3 = sobj.nextInt();

        Check eobj = new Check();
        {
            int iRet = eobj.Domulti(iValue1, iValue2, iValue3);

            System.out.println("Multiplication is :" +iRet);
        }
        sobj.close();
    }
}
