// Input: 7 
// Output : abcdefg

import java.util.*;

class program182
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';     // Initializing with default value
        
        for(iCnt = 1,ch = 65; iCnt <= iNo; iCnt++,ch++)
        {
            System.out.print(ch + "\t" );
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

    }    
}
