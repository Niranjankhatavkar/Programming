// Input: 7 
// Output : A   b   C   d   E   f   

import java.util.*;

class program187
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        char ch2 = '\0';     // Initializing with default value
        

        for(iCnt = 1,ch = 'A',ch2 = 'a'; iCnt <= iNo; iCnt++,ch++,ch2++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(ch2 + "\t");
            }
            else
            {
                System.out.print(ch + "\t");
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

    }    
}
