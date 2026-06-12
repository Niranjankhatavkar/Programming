class Logic
{
    public void CheckPrime(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 2; iCnt < iNo;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }

        if(iCount == 0)
        {
            System.out.println("Number is Prime");
        }
        else
        {
            System.out.println("Number is NOT Prime");
        }
    }
}

class program86
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.CheckPrime(15   );
    }
}