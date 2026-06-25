import java.util.*;

class program276
{
    public static void main(String A[])
    {   
        Scanner sobj = new Scanner(System.in);
        String data = null;
        StringX strobj = new StringX();     // Error

        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of Capital characters : " + iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of small characters : " + iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits : " + iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Spaces : " + iRet);

        iRet = strobj.CountSpecial(data);
        System.out.println("Number of Special Symbol : " + iRet);
    }
}