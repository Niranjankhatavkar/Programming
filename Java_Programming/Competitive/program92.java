import java.util.Scanner;

class Logic
{
    public void DisplayGrades(int iNo)
    {
        if(iNo >= 90 && iNo <= 100)
        {
            System.out.println("Grade A");        
        }

        else if(iNo >= 75 && iNo < 90)
        {
            System.out.println("Grade B");        
        }

        else if(iNo >= 50 && iNo < 75)
        {
            System.out.println("Grade C");        
        }

        else if(iNo >= 35 && iNo < 50)
        {
            System.out.println("Grade D");        
        }
        else if(iNo < 35 && iNo > 0)
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid Marks");

        }
    }
}

class program92
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Marks: ");
        iValue = sobj.nextInt();

        obj.DisplayGrades(iValue);

        
    }
}