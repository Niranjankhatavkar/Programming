class Logic
{
    public void Minimum(int iNo1, int iNo2,int iNo3)
    {
        if(iNo1 < iNo2 && iNo1 < iNo3 )
        {
            System.out.println(iNo1 + " is minimum.");
        }

        else if(iNo2 < iNo1 && iNo2 < iNo3)
        {
            System.out.println(iNo2 + " is minimum.");
        }

        else
        {
            System.out.println(iNo3 + " is minimum.");
        }
    }
}

class program84
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();

        obj.Minimum(7,17,1);

    }
}