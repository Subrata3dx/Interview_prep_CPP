#include <iostream>
#include <vector>
using namespace std;


class Empty
{
    string message;
public:

    Empty(string s)
    {
        message = s;
    }

    void showMessage()
    {
        cout<<endl<<message<<endl;
    }
};

class Fully
{
    string message;
public:

    Fully(string s)
    {
        message = s;
    }
    void showMessage()
    {
        cout<<endl<<message<<endl;
    }

};




class Test
{
    vector<int> v;
    int counting = 0;

public:
    void add(int a)
    {

        if(counting>2)
        {
            throw(Fully("List is full"));
        }

        else
        {
            v.push_back(a);
            counting++;
        }


    }

    int get()
    {
        if(counting==0)
        throw(Empty("List is empty"));

        else
        {
        counting--;
        return v.at(counting);
        v.pop_back();
        //counting--;
        }
    }

};

int main()
{
    Test t;
    try
    {
    t.add(10);
    t.add(20);
    t.add(30);
    t.add(40);
    }
    catch(Fully f)
    {
        f.showMessage();
    }

    try{
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    cout<<t.get()<<endl;
    }

    catch (Empty e)
    {
        e.showMessage();

    }


    return 0;
}
