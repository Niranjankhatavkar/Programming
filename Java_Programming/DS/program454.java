class node
{
    public int data;
    public node next;

    node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void Display()
    {}

    public int Count()
    {
        return iCount;
    }

    public void InsertFirst(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            this.first = newn;
        }

        else
        {
            newn.next = this.first;
            this.first = newn;
        }

        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn = new node(iNo);

        if(first == null)
        {
            first = newn;
        }

        else if(first.next == null)
        {
            first = null;
        }

        else
        { 
            node temp = null;

            temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            } 

            temp.next = newn;

            newn.next = null;            
        }

        iCount++;

    }

    public void InsertAtPos(int iNo, int iPos)
    {}

    public void DeleteFirst()
    {}

    public void DeleteLast()
    {}

    public void DeleteAtPos()
    {}

}

class program454
{
    public static void main(String A[]) 
    {
        SinglyLL sobj = new SinglyLL();

        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        

    }
}