import java.util.*;

class DigitX
{
    public int iDigit = 0;
    public int iCount = 0;

    public int CountDigits(int iNo)
    {
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            
            if(iDigit == 7)
            {
                iCount++;
            }
            
            iNo = iNo / 10;            
        }

        return iCount;
    }
}

class program85
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        iRet = dobj.CountDigits(iValue);

        System.out.println("Number of Digits: " + iRet);

        sobj.close();

    }
}