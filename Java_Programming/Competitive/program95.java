import java.util.Scanner;

class Logic
{
    public void CalculatePower(int base, int exp)
    {
        int iCnt = 0;
        int iAns = 1;
        
        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            iAns = iAns * base;
        }

        System.out.println(iAns);
    }
}

class program95
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter Number: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Power: ");
        iValue2 = sobj.nextInt();

        obj.CalculatePower(iValue1,iValue2);

        sobj.close();
        
    }
}