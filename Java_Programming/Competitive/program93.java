import java.util.Scanner;

class Logic
{
    public boolean CheckDivisible(int iNo)
    {
        if(iNo % 5 == 0 && iNo % 11 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program93
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        bRet = obj.CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println("It is Divisible");
        }
        else
        {
            System.out.println("It is not Divisible");
        }
    }
}