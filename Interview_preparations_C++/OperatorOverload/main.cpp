#include <iostream>
#include "usesOfThisPinter.cpp"
using namespace std;



class Plus{

private:
    int x;
    int y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;

    }

    void put();

    Plus operator+(Plus);

   Plus operator++()
    {

        Plus temp;
        temp.x = ++x;
        temp.y = ++y;
        return temp;

    }

  Plus operator++(int)
    {

        Plus temp;
        temp.x = x++;
        temp.y = y++;
        return temp;
    }





};

Plus Plus ::operator+(Plus object)
    {
        Plus temp;
        temp.x = x+object.x;
        temp.y = y+object.y;

        return temp;

    }


void Plus::put()
    {
        cout<<endl<<"x "<<x<<endl<<"y= "<<y<<endl;
    }

int main()
{
    Plus obj1, obj2, obj3;
    obj1.set(30, 40);
    obj2.set(10, 20);
    obj3 = obj1 + (obj2++);
    obj3.put();
    obj2.put();
    //cout<<endl<<obj3.x;

    cout<<"from class UseThis"<<endl;

    UseThis p1(10);
    UseThis *ptr = new UseThis(20);
    p1.change(ptr);
    p1.get();

    delete ptr;

    return 0;
}
