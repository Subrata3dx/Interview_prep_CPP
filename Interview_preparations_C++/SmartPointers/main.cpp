#include <iostream>
#include<memory>

using namespace std;

class Smtpointer
{

private:
    int size;
    unique_ptr<int[]> p;



public:
    Smtpointer()
    {

    }
    Smtpointer(int x): size(x), p(make_unique<int[]>(size))
    {
       // size = x;

        cout<<endl<<"Constructor called"<<endl;

    }

    void add()
    {

        for(int i = 0; i<size; i++)
        {
            p[i] = i;
        }
    }

    void show()
    {

        for(int i = 0; i<size; i++)
        {
            cout<<p[i] <<" ";
        }
        cout<<endl;
    }

    ~Smtpointer()
    {
        cout<<endl<<"Destructor called";
        //delete p;
    }
};

int main()
{
    Smtpointer *s = new Smtpointer(10);
    s->add();
    s->show();
    delete s;
    return 0;
}
