import java.util.Scanner;

class Logic
{
    public boolean CheckPalindrome(int num)
    {
        int iDigit = 0;
        int iValue = 0;
        int iTemp = 0;

        iTemp = num;

        while(num != 0)
        {
            iDigit = num % 10; 
            iValue = (iValue * 10) + iDigit;
            num = num / 10;
        }   

        if(iTemp == iValue)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program82
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        bRet = obj.CheckPalindrome(iValue);

        
        if(bRet == true)
        {
            System.out.println("Number is Pallindrome");
        }
        else
        {
            System.out.println("Number is NOT Pallindrome");
        }

        sobj.close();
    }
}