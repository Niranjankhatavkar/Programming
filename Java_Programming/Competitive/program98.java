
import java.util.Scanner;

class Logic
{
    public boolean CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1 ;iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program98
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        boolean bRet = false;

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        bRet = obj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println("Number is Perfect");
        }
        else
        {
            System.out.println("Number is NOT Perfect");

        }

        sobj.close();
        
    }
}