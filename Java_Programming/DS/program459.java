class node
{
    public int data;
    public node next;
    public node prev;
}

class DoublyLL
{
    private node first;
    private int iCount;

    DoublyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    void Display()
    {
        node temp = null;

        if(first == null)
        {
            System.out.println("null <-");
        }
        
        else
        {
            temp = first;

            System.out.print("null <-");
            
            while(temp != null)
            {
                System.out.printf(" | %d | <=> ", temp.data);
                temp = temp.next;
            }

            System.out.println("null");
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
        newn.prev = null;

        if(first == null)
        {
            first = newn;
        }

        else
        {
            newn.next = first;
            first.prev = newn;

            first = newn;
            newn.prev = first;
        }

        iCount++;
    }

    void InsertLast(int iNo)
    {
        node newn = new node();
        node temp = null;

        newn.data = iNo;
        newn.next = null;
        newn.prev = null;

        if(first == null)
        {
            first = newn;
        }

        else
        {
            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
            newn.prev = temp;
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
            newn.prev = null;

            temp = first;

            for(i = 1; i<(iPos-1); i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            newn.next.prev = newn;
            newn.prev = temp;
        
            iCount++;
        }

    }

    void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }

        else if(first.next == null)
        {
            first = null;
        }

        else
        {
            first = first.next;
            first.prev.next = null;
            first.prev = null;
        }

        iCount--;
    }

    void DeleteLast()
    {
        node temp = null;

        if(first == null)
        {
            return;
        }

        else if(first.next == null)
        {
            first = null;
        }

        else
        {
            temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next.prev = null;
            temp.next = null;

        }

        iCount--;
    }

    void DeleteAtPos(int iPos)
    {
        node temp = null;
        node target = null;

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

            target = temp.next;

            temp.next = target.next;
            temp.next.prev = temp;

            target.prev = null;
            target.next = null;

            target = null;

        }

        iCount--;
    }

}

class program459
{
    public static void main(String A[])
    {
        int iRet = 0;

        DoublyLL dobj = new DoublyLL();

        dobj.InsertFirst(51);
        dobj.InsertFirst(21);
        dobj.InsertFirst(11);
        
        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);

        dobj.InsertLast(101);
        dobj.InsertLast(111);
        dobj.InsertLast(121);

        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);

        dobj.InsertAtPos(71,4);

        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);

        dobj.DeleteFirst();

        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);

        dobj.DeleteLast();

        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);

        dobj.DeleteAtPos(3);

        dobj.Display();
        
        iRet = dobj.Count();
        System.out.println("Number of Nodes :" + iRet);
    
    }
}