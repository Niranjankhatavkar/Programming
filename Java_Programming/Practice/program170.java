import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iSize;
    Scanner sobj = new Scanner(System.in);

    ArrayX(int X)
    {
        iSize = X;
        Arr = new int[iSize];
    }
    


    public void Accept()
    {
        int iCnt = 0;

        System.out.println("Enter Elements:");

        for(iCnt = 0;iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Entered Elements are :");
        for(iCnt = 0;iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    int Summation()
    {
        int iSum = 0,iCnt = 0;

        for(iCnt = 0;iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;

    }

}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;

        System.out.println("Enter Number of Elements: ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation of Elements: " + iRet);

        sobj.close();

    }
}