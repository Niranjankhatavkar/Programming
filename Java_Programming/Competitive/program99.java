
import java.util.Scanner;

class Logic
{
    public void FindLargestDigit(int iNo)
    {
        int iLargest = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iLargest < iDigit)
            {
                iLargest = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest Digit is: " + iLargest);
    }
}

class program99
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.FindLargestDigit(iValue);

        sobj.close();
        
    }
}