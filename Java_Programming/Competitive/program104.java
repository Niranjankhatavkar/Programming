import java.util.Scanner;

class Logic
{
    public void CountFactors(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }
        System.out.println("Number of Factor are " + iCount);
    }
}

class program104
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.CountFactors(iValue);

        sobj.close();
    }
}