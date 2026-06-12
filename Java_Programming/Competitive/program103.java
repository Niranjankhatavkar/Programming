import java.util.Scanner;

class Logic
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program103
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        obj.DisplayFactors(iValue);

        sobj.close();
    }
}