#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    node<T> *lchild;
    node<T> *rchild;
};

template <class T>
class BST
{
    private:
        node<T>* first;
        int iCount;
        void Inorder(struct node<T> *temp);
        void Preorder(struct node<T> *temp);
        void Postorder(struct node<T> *temp);
        int CountLeaf(struct node<T> *temp);
        int CountParent(struct node<T> *temp);

    public:
        BST();
        ~BST();

        void Inorder();
        void Preorder();
        void Postorder();
    
        void Insert(T iNo);
        
        bool search(T iNo);
        
        int Count();
        int CountLeaf();
        int CountParent();
};

template <class T>
BST<T> :: BST()
{
    this->first = NULL;
    this->iCount = 0;
}

template <class T>
BST<T> :: ~BST()
{}

template <class T>
void BST<T> :: Inorder(node<T> *temp)
{   
    if(temp == NULL)
    {
        return;
    }

    Inorder(temp->lchild);
    cout<<temp->data<<endl;           
    Inorder(temp->rchild);   
}

template <class T>
void BST<T> ::Inorder()
{
    Inorder(first);
}

template <class T>
void BST<T> :: Preorder(struct node<T>* temp)
{
    if(temp == NULL)
    {
        return;
    }

    cout<<temp->data<<"\n";
    Preorder(temp->lchild);
    Preorder(temp->rchild);
}

template <class T>
void BST<T> ::Preorder()
{
    Preorder(first);
}

template <class T>
void BST<T> :: Postorder(node<T>* temp)
{
    if(temp == NULL)
    {
        return;
    }

    Postorder(temp->lchild);
    Postorder(temp->rchild);
    cout<<temp->data<<"\n";
}

template <class T>
void BST<T> ::Postorder()
{
    Postorder(first);
}

template <class T>
void BST<T> :: Insert(T iNo)
{
    struct node<T>* newn = NULL;
    newn = new node<T>();

    struct node<T>* temp = NULL;

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

template <class T>
bool BST<T> :: search(T iNo)
{       
    struct node<T>* temp = NULL;
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

template <class T>
int BST<T> :: Count()
{
    return iCount;
}

template <class T>
int BST<T> :: CountLeaf(struct node<T>* temp)
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

template <class T>
int BST<T> :: CountLeaf()
{
    return CountLeaf(first);   
}

template <class T>
int BST<T> :: CountParent(struct node<T>* temp)
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

template <class T>
int BST<T> :: CountParent()
{
    return CountParent(first);
}

int main()
{
    bool bRet = false;

    BST <int>bobj;

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
