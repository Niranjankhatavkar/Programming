// Input: 11
// Output : *   *   *   #   #   #   *   *   *   #   # 
//          1   2   3   4   5   6   7   8   9  10  11
import java.util.*;

class program184
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        int iCnt2 = 0;

        for(iCnt = 0,iCnt2 = 1; iCnt <= iNo; iCnt++,iCnt2++)
        {
            if(iCnt2 <= 3)
            {
                System.out.print("*\t");
            }
            else if(iCnt2 <= 6)
            {
                System.out.print("#\t");
            }
            else
            {
                iCnt2 = 0;
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
