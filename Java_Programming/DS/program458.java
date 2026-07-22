class node
{
    public int data;
    public node next;
}

class SinglyCL
{
    private node first;
    private node last;
    private int iCount;

    SinglyCL()
    {
        this.first = null;
        this.last = null;
        this.iCount = 0;
    }

    void Display()
    {
        node temp = null;

        if(first == null && last == null)
        {
            System.out.println("null");
        }

        else
        {
            temp = first;

            do{
                System.out.printf("| %d | -> ",temp.data);
                temp = temp.next;

            }while(temp != first);

            System.out.println("");
        }
    }

    int Count()
    {
        return iCount;
    }

    void InsertFirst(int iNo)
    {
        node newn = new node();

        newn.data = iNo;
        newn.next = null;

        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = first;
        }

        else
        {
            newn.next = first;
            first = newn;
            last.next = first;
        }

        iCount++;

    }

    void InsertLast(int iNo)
    {
        node newn = new node();
        
        newn.data = iNo;
        newn.next = null;
        
        if(first == null && last == null)
        {
            first = newn;
            last = newn;
            newn.next = first;
        }

        else
        {
            last.next = newn;
            last = newn;
            last.next = first;
        }
        
        iCount++;
    }

    void InsertAtPos(int iNo, int iPos)
    {
        node newn = new node();
        node temp = null;

        int i = 0;

        if(iPos < 1 || iPos > iCount+1)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }

        else if(iPos == iCount+1)
        {
            InsertLast(iNo);
        }

        else
        {   
            newn.data = iNo;
            newn.next = null;
            
            temp = first;

            for(i = 1; i < (iPos-1); i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            iCount++;
        }

    }

    void DeleteFirst()
    {
        if(first == null && last == null)
        {
            return;
        }

        else if(first == last)
        {
            first = null;
            last = null;
        }

        else
        {
            first = first.next;
        }

        iCount--;
    }

    void DeleteLast()
    {
        node temp = null;


        if(first == null && last == null)
        {
            return;
        }

        else if(first == last)
        {
            first = null;
            last = null;
        }

        else
        {
            temp = first;

            do
            {
                temp = temp.next;
            }while(temp.next != last);

            last = temp;

            last.next = first;
        }

        iCount--;
    }

    void DeleteAtPos(int iPos)
    {
        node temp = null;

        int i = 0;

        if(iPos < 1 || iPos > iCount)
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }

        else if(iPos == iCount)
        {
            DeleteLast();
        }

        else
        {
            temp = first;

            for(i = 1; i < (iPos-1); i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            
            iCount--;
        }
    }
}

class program458
{
    public static void main(String A[])
    {   
        int iRet = 0;

        SinglyCL sobj = new SinglyCL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes :" + iRet);

        sobj.InsertAtPos(31,3);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes :" + iRet);

        sobj.DeleteLast();

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes :" + iRet);

        sobj.DeleteAtPos(3);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes :" + iRet);
    }
}