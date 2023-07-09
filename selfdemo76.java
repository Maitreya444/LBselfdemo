//Accept number from user nad check wheather ity is even or odd
import java.util.*;
public class selfdemo76 
{   
    public static void main(String[] args) 
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        iNo = sobj.nextInt();

        if((iNo %2)==0)
        {
            System.out.println("EVEN");
        }
        else
        {
            System.out.println("ODD");
        }
        sobj.close();
    }
}
