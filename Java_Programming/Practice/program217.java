/*
    iRow = 5
    iCol = 5

    %   %   %   %   %
    %   @           %
    %       @       %
    %           @   %
    %   %   %   %   %
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
            for(j = 1; j<= iCol; j++)
            {
                if(j == 1 || j == iCol || i == 1 || i == iRow || i == j)     
                {
                    System.out.print("% ");
                }
                else
                {
                    System.out.print("  ");

                }
            }
            System.out.println();
        }   
    }
}
class program217
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