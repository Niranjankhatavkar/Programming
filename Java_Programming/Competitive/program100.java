
import java.util.Scanner;

class Logic
{
    public void FindSmallestDigit(int iNo)
    {
        int iSmallest = 0;
        int iDigit = 0;

        iSmallest = iNo % 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iSmallest > iDigit)
            {
                iSmallest = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest Digit is: " + iSmallest);
    }
}

class program100
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.FindSmallestDigit(iValue);

        sobj.close();
        
    }
}