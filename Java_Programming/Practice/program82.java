import java.util.*;

class DigitX
{
    public int iDigit = 0;
    
    public void DisplayDigits(int iNo)
    {
        for( ; iNo != 0; iNo = iNo / 10)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
        }
    }
}

class program82
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        dobj.DisplayDigits(iValue);

        sobj.close();


    }

}