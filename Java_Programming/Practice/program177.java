// Input: 7
// Output : 1   *   2   *   3   *   4   

import java.util.*;

class program177
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1,iCount = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("\t*\t");
            }
            else
            {
                System.out.print(iCount);
                iCount++;
            }
        }

        System.out.println();

    }


    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number of Elements:");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();

    }    
}
