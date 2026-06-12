import java.util.Scanner;

class Logic
{
    public void PrintDigits(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit + "\t");
            iNo = iNo / 10;
        }
    }
}

class program94
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.PrintDigits(iValue);

        
    }
}