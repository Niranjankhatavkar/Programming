import java.util.Scanner;

class Logic
{
    public boolean CheckLeapYear(int iNo)
    {
        if(iNo % 4 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program91
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        int iValue = 0;

        System.out.println("Enter Year: ");
        iValue = sobj.nextInt();

        bRet = obj.CheckLeapYear(iValue);

        if(bRet == true)
        {
            System.out.println("It is a Leap Year");
        }
        else
        {
            System.out.println("It is not a Leap Year");
        }
    }
}