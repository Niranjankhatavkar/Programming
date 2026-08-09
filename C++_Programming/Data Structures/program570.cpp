#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;

class BST
{
    private:
        PNODE first;
        int iCount;
        void Inorder(PNODE temp);
        void Preorder(PNODE temp);
        void Postorder(PNODE temp);
        int CountLeaf(PNODE temp);
        int CountParent(PNODE temp);

    public:
        BST();
        ~BST();

        void Inorder();
        void Preorder();
        void Postorder();
    
        void Insert(int iNo);
        
        bool search(int iNo);
        
        int Count();
        int CountLeaf();
        int CountParent();
};

BST :: BST()
{
    this->first = NULL;
    this->iCount = 0;
}

BST :: ~BST()
{}

void BST :: Inorder(PNODE temp)
{   
    if(temp == NULL)
    {
        return;
    }

    Inorder(temp->lchild);
    cout<<temp->data<<endl;           
    Inorder(temp->rchild);   
}

void BST::Inorder()
{
    Inorder(first);
}

void BST :: Preorder(PNODE temp)
{
    if(temp == NULL)
    {
        return;
    }

    cout<<temp->data<<"\n";
    Preorder(temp->lchild);
    Preorder(temp->rchild);
}

void BST::Preorder()
{
    Preorder(first);
}

void BST :: Postorder(PNODE temp)
{
    if(temp == NULL)
    {
        return;
    }

    Postorder(temp->lchild);
    Postorder(temp->rchild);
    cout<<temp->data<<"\n";
}

void BST::Postorder()
{
    Postorder(first);
}

void BST :: Insert(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE();

    PNODE temp = NULL;

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(first == NULL)
    {
        first = newn;
        iCount++;
    }

    else
    {
        temp = first;

        while(1)
        {   
            if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    iCount++;
                    break;
                }   
                temp = temp->lchild;     
            }

            else if (iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    iCount++;
                    break;
                }

                temp = temp->rchild;
            }

            else if(iNo == temp->data)
            {
                printf("Cannot insert duplicate values");
                break;
            }
        }
    }
}

bool BST :: search(int iNo)
{       
    PNODE temp = NULL;
    temp = first;

    bool bFlag = false;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            bFlag = true;
            break; 
        }

        else if(iNo < temp->data)
        {
            temp = temp->lchild;
        }

        else if(iNo > temp->data)
        {
            temp = temp->rchild;
        }
    }
    
    return bFlag;
}
    
int BST :: Count()
{
    return iCount;
}

int BST :: CountLeaf(PNODE temp)
{   
    static int leafCount = 0;

    if(temp != NULL)
    {
        if(temp->lchild == NULL && temp->rchild == NULL)
        {
            leafCount++;
        }

        CountLeaf(temp->lchild);
        CountLeaf(temp->rchild);
    }

    return leafCount;
}

int BST :: CountLeaf()
{
    return CountLeaf(first);   
}

int BST :: CountParent(PNODE temp)
{
    static int ParentCount = 0;

    if(temp != NULL)
    {
        if(temp->lchild != NULL || temp->rchild != NULL)
        {
            ParentCount++;
        }

        CountParent(temp->lchild);
        CountParent(temp->rchild);
    }

    return ParentCount;
}

int BST :: CountParent()
{
    return CountParent(first);
}

int main()
{
    bool bRet = false;

    BST bobj;

    bobj.Insert(10);
    bobj.Insert(5);
    bobj.Insert(14);
    bobj.Insert(21);
    bobj.Insert(3);
    bobj.Insert(6);
    
    bobj.Postorder();

    bRet = bobj.search(14);

    if(bRet == true)
    {
        cout<<"Element is present\n";
    }

    else
    {
        cout<<"Element is NOT present\n";
    }

    cout<<"Number of Nodes : "<< bobj.Count()<<endl;

    cout<<"Number of Leaf Nodes : "<< bobj.CountLeaf()<<endl;

    cout<<"Number of Parent Nodes : "<< bobj.CountParent()<<endl;

    return 0;
}