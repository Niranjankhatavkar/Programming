import java.util.Scanner;

class Logic
{
    public void PrintDivisibleBy2and3(int iNo)
    {
        int iCnt = 0;

        if(iNo % 2 == 0 && iNo % 3 == 0)
        {
            System.out.println("Number is Divisible by 2 and 3");
        }
        else
        {
            System.out.println("Number is NOT Divisible by 2 and 3");

        }
        
    }
}

class program105
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.PrintDivisibleBy2and3(iValue);

        sobj.close();
    }
}