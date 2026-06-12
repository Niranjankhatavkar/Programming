
import java.util.Scanner;

class Logic
{
    public void SumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println(iSum);
    }
}

class program96
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.SumEvenNumbers(iValue);

        sobj.close();
        
    }
}