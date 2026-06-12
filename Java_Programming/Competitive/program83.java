class Logic
{
    public void Maximum(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1 + " is maximum.");
        }
        else
        {
            System.out.println(iNo2 + " is maximum.");
        }
    }
}

class program83
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();

        obj.Maximum(30,20);

    }
}