//Accept one number from user check wheather it is divisible by 5 or not
import java.util.*;

    class Divisible
    {
        private int number;

        public void setNumber(int number)
        {
            this.number = number;
        }
        public boolean isDivisible()
        {
            return number %5 ==0;
        }
    }

public class selfdemo61 
{
    public static void main(String[] args) 
    {   
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        Integer number = sobj.nextInt();

        Divisible  divisible = new Divisible();

        divisible.setNumber(number);

        if(divisible.isDivisible())
        {
            System.out.println(number+  "is Divisible 5");
        }
        else
        {
            System.out.println(number+  "is not Divisible 5");
        }
        sobj.close();
    }    
}