import java.util.Scanner;

class Logic
{
    public void CheckSign(int iNo)
    {
        if(iNo > 0)
        {
            System.out.println("Number is Positive");
        }
        else if(iNo == 0)
        {
            System.out.println("Number is Zero");
        }
        else
        {
            System.out.println("Number is Negative");   
        }
    }
}

class program90
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.CheckSign(iValue);
    }
}