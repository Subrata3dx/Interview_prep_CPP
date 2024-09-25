#include <iostream>

using namespace std;

class container
{

private:
    int count;

    struct node
    {
        int data;
        node *link;
    }*head, *current;

public:
    container()
    {

        head = current = NULL;
        count = 0;
    }

    void add(int n)
    {

        node *temp = new node;
        temp->data = n;
        temp->link = NULL;

        if(head == NULL)
        {
           head = current = temp;

        }

        else
        {
            node *q;
            q = head;
            while(q->link!=NULL)
                q=q->link;
            q->link = temp;

        }

        count++;
    }

    int getCount()
    {

        return count;
    }

    friend class smartpointer;
};

class smartpointer
{
private:
    container *cptr;

public:

smartpointer(container *t)
{
    cptr = t;
}

int operator *()
{

    if(cptr->current==NULL)
        return 0;
    else
    {
        int i = cptr->current->data;
        return i;
    }


}

void operator ++(int k) //parameter k is used just as a place holder in compliance with the definition of ++ function,
//else the code will not work as the ++ operator needs an int operand to increment it.
    {
        if(cptr->current!=NULL)
        cptr->current=cptr->current->link;

    }

    container* operator ->()
    {
        return cptr;
    }
};


int main()
{
    container c;
   // c.add(10);
    //c.add(20);
    //c.add(30);
    //c.add(-40);

    smartpointer sptr(&c);
    sptr->add(10);
    sptr->add(20);

    for(int i = 0; i<c.getCount();i++)
    {
        cout<<endl<<*sptr;
        sptr++;
    }

    return 0;
}
