// Type 1
import java.util.Scanner;

class program39
{
    public static void main(String[] args) 
    {   
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        if((iValue % 3 == 0)&&(iValue % 5 == 0))
        {
            System.out.println("Number is Divisible by 3 & 5");
        }       

        else
        {
            System.out.println("Number is NOT divisible 3 & 5");
        }

        sobj.close();

    }
}