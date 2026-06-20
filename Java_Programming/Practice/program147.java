import java.util.*;

class ArrayX
{
    public static void Update(int Arr[])
    {
        int iCnt = 0;

        for(iCnt = 0;iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]++;
        }
    }
}

class program147
{
    

    public static void main(String A[])
    {
        
    
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;
    
        System.out.println("Enter the Number of Elements : ");
        int iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        System.out.println("Enter the Elements: ");
        for(iCnt = 0; iCnt < Brr.length ; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of the Array Before Update :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        } 


        ArrayX.Update(Brr);

        System.out.println("Elements of the Array after Update :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        Brr = null;         
        System.gc();
    }
}