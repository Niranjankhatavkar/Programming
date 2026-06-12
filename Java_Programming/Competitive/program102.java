import java.util.Scanner;

class Logic
{
    public void CountEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iEven = 0;
        int iOdd = 0;
    
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            
            if(iCnt % 2 == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        
        }

        System.out.println("Count of Even Numbers: " + iEven);
        System.out.println("Count of Odd Numbers: " + iOdd);
    }
}

class program102
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.CountEvenOddRange(iValue);

        sobj.close();
    }
}