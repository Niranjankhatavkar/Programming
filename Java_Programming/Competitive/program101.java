
import java.util.Scanner;

class Logic
{
    public void ProductofDigits(int iNo)
    {
        int iProduct = 0;
        int iDigit = 0;

        iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iProduct = iProduct * iDigit;

            iNo = iNo / 10;
        }

        System.out.println("Product of Digits is: " + iProduct );
    }
}

class program101
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.ProductofDigits(iValue);

        sobj.close();
        
    }
}