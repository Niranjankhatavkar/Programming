// Input: 7 
// Output : A   2   B   4   C   6   

import java.util.*;

class program184
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';     // Initializing with default value
        

        for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.print(iCnt);
            }
            else
            {
                System.out.print(ch);
        
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
