import java.util.Scanner;

class Logic
{
    public void SumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iEven = 0;
        int iOdd = 0;
    
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit % 2 == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum of Even Digits: " + iEven);
        System.out.println("Sum of Odd Digits: " + iOdd);
    }
}

class program89
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.SumEvenOddDigits(iValue);
    }
}