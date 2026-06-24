/*
    iRow = 4
    iCol = 4

    *
    *   *
    *   $   *
    *   $   $   *
    *   *   *   *   *
   
    
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;
        
        // Filter for Diagonal Pattern
        if(iRow != iCol)
        {
            System.out.println("Invalid parameters");
            System.out.println("Number of Rows and Columns should be same");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= i; j++)
            {
                if(i == j || i == iRow || j == 1)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("$\t");
                }
            }

            System.out.println();
        }   
    }
}

class program228    
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter Number of Rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number of Column :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
}
