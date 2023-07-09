import java.util.*;
class selfdemo48
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner (System.in);
        
        System.out.println("Enter first Number \n");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number \n");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        iAns = iNo1 + iNo2;

        System.out.println("Addition is "+iAns);

        sobj.close();
    }
}