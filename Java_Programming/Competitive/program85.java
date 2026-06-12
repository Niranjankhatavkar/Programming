class Logic
{
    public void Table(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt <= (iNo * 10);iCnt = iCnt + iNo)
        {
            System.out.println(iCnt);
        }
    }
}

class program85
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.Table(5);
    }
}