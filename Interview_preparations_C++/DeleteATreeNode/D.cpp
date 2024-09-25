
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

class RemoveN
{

private:
    struct node
    {
        node* r;
        node* l;
        int data;
    }*p;

public:

    RemoveN();
    ~RemoveN();
    void search (int n, int & found, node* &parent, node* &x);
    void insert(int n);
    void traverse();
    void in(node* q);
    void del(int num);
    void infordel(node* q);
};

RemoveN::RemoveN()
{

    p = NULL;
}

RemoveN::~RemoveN()
{

    infordel(p);
}

void RemoveN::search(int n, int &found, node* &parent, node* &x)
{
    node* q;
    found = FALSE;
    parent = NULL;

    if(p = NULL)
    {
        return;
    }
    q=p;
    while(q!=NULL)
    {
        if(q->data==n)
        {
            found = TRUE;
            x= q;
            return;
        }

        if(q->data>n)
        {
            parent =q;
            q=q->l;
        }

        else
        {
        parent =q;
        q=q->r;

        }
    }

}

void RemoveN::insert(int n)
{
    int found;
    node *t, *parent, *x;
    search(n, found, parent, x);
    if(found ==TRUE)
        cout<<endl<<"Such a node already exists."<<endl;
    else
    {
        t = new node;
        t->data = n;
        t->l=NULL;
        t->r=NULL;

        if(parent==NULL)
            p = t;
        else
            parent->data > n ? parent->l=t : parent->r=t;
    }

}

void RemoveN::traverse()
{

    in(p);
}

void RemoveN::in(node* q)
{

    if(q!=NULL)
    {

        in(q->l);
        cout<<endl<<q->data;
        in(q->r);
    }
}

void RemoveN::infordel(node* q)
{

    if(q!=NULL)
    {

        infordel(q->l);
        del(q->data);
        infordel(q->r);
    }

}

void RemoveN::del(int num)
{

    int found;
    node* parent, *x, *xsucc;

    //if tree is empty
    if(p==NULL)
    {

        cout<<endl<<"Tree is empty."<<endl;
        return;

    }

    parent=x= NULL;
    //call the search function to find the node to be deleted

    search(num, found, parent, x);
    //if the node to be deleted is not found
    if(found==FALSE)
    {
        cout<<endl<<"Node to be deleted is not found."<<endl;
        return;
    }

    //if the node to deleted has two children

    if((x->l!=NULL)&&(x->r!=NULL))
    {
     parent = x;
     xsucc = x->r;
     while(xsucc->l!=NULL)
     {

         parent=xsucc;
         xsucc = xsucc->l;
     }

     x->data=xsucc->data;
     x=xsucc;
    }

    //if the node to be deleted has no child

    if((x->l==NULL)&&(x->r==NULL))
    {

        if(parent->r==x)
            parent->r=NULL;
        else
            parent->l = NULL;

        delete x;
        return;
    }

    //if the node to be deleted has only right child

    if(x->l==NULL &&x->r!=NULL)
    {

        if(parent->l==x)
            parent->l=x->r;
        else
            parent->r=x->r;
        delete x;
        return;
    }

    //if the node to be deleted has only left child

    if(x->l!=NULL &&x->r==NULL)
    {

        if(parent->l==x)
            parent->l=x->l;
        else
            parent->r=x->l;
        delete x;
        return;
    }
}


int main()
{

    RemoveN rr;
    int i, num;

    for(i = 0; i<6;i++)
    {

        cout<<endl<<"Enter the data for the node to be inserted.";
        cin>>num;
        rr.insert(num);

    }

    rr.traverse();
    cout<<endl<<"Enter the value of the node to be deleted.";
    cin>>num;

    rr.del(num);
    cout<<endl;
    rr.traverse();
    return 0;
}

