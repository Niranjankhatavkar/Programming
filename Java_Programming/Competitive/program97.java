
import java.util.Scanner;

class Logic
{
    public void PrintReverse(int iNo)
    {
        int iCnt = 0;

        
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}

class program97
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.PrintReverse(iValue);

        sobj.close();
        
    }
}