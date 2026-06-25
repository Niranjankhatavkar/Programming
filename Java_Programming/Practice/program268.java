import java.util.*;
import java.util.*;

class StringX
{
    public void Display(String str)
    {
        System.out.println("Received string is : " + str);
    }
}

class program268
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        StringX strobj = new StringX();

        String str = null;

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        strobj.Display(str);

    }
}