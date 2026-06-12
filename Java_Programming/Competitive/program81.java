class Logic
{
    public void SumofDigits(int num)
    {
        int iSum = 0;
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10; 
            iSum = iSum + iDigit;
            num = num / 10;
        }   

        System.out.println("Sum of Digits: "+ iSum);
    }
}

class program81
{
    public static void main(String[] args) 
    {
        Logic lobj = new Logic();

        lobj.SumofDigits(1234);

    }
}