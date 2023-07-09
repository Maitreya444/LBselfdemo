//Write a program which accpet number from user and display its multiplication of its factors.
//Input :  12
//Output : 144  (1*2*3*4*6)
import java.util.*;
class Numbers
{
    public int Factorial(int iNo)
    {
        int Add = 1;
        for(int iCnt = 2; iCnt <= iNo/2; iCnt++)
        {   
            if((iNo % iCnt)==0)
            {
            System.out.println(iCnt);
            Add = Add * iCnt;
            }
        }
        return Add;
    }
}
class selfdemo79
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iValue = sobj.nextInt();

        Numbers nobj = new Numbers(); 
        {
            int iRet = nobj.Factorial(iValue);

            System.out.println("Multiplication of Factorial is :"+iRet);
        }; 
        sobj.close();
    }   
}