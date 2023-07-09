import java.util.*;
class ChkEqual
{
    public boolean Equal(int iNo1, int iNo2)
    {
        if(iNo1 == iNo2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
public class selfdemo98 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number 1");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number 2");
        int iValue2 = sobj.nextInt();

        ChkEqual eobj = new ChkEqual();
        {
            boolean bRet = eobj.Equal(iValue1, iValue2);

            if(bRet == true)
            {
                System.out.println("Equal");
            }
            else
            {
                System.out.println("Not Equal");
            }
        }sobj.close();
    }    
}
