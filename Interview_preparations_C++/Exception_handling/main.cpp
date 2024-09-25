#include <iostream>
#include <string.h>

using namespace std;



#define MAX 4

class Queue
{
private:
    int array[MAX], head, rear;

public:

    Queue()
    {

    head = rear = -1;
    }

    class Full
    {
       public:
        char str[50];

        Full(){}


        Full(char *s)
        {
            strcpy (str, s);

        }

    };

    class Empty
    {
    public:
        char str[50];

        Empty(char *s)
        {
            strcpy (str, s);

        }

    };


    void add(int x)
    {

        if (rear == MAX-1)
            throw Full("List is full.");
            //throw full();

        rear++;
        array[rear] = x;

        if(head ==-1)
            head = 0;

    }

    int out()
    {
        int y;

        if(head == -1)
            throw Empty("List is empty.");


        y = array[head];

        if(head ==rear)
            head = rear = -1;

        else
           head++;

        return y;



    }

};


int main()
{

    Queue Q;
    cout<<"Adding data from 1 to 5 in the list:"<<endl;
        try
        {
            for(int i = 0; i<5; i++)
                Q.add(i);

        }

        catch (Queue::Full f)
        {
            cout<<endl<<f.str;
        }

        cout<<endl<<"Printing data from the list:"<<endl;
        try
        {
            for(int i = 0; i<5; i++)
                cout<<Q.out()<<"\t";

        }

        catch (Queue::Empty e)
        {
            cout<<endl<<e.str;
        }
    //cout << "Hello world!" << endl;
    return 0;
}
