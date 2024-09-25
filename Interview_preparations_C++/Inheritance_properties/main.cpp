#include <iostream>

using namespace std;


class Base{
protected:
int wheel;
public:
    Base()
    {

    }


    Base(int wh)
    {
        wheel = wh;
        cout<<"Base constructor is called"<<endl;

    }
    void virtual show(void)
    {
        cout<<"Base wheels number: "<<wheel<<endl;
    }
};

class Derived: public Base{
public:
string fuelType;

public:
    Derived(string fuel, int wh): Base(wh)
    {
        cout<<"Derived class constructor is called"<<endl;
        fuelType= fuel;

    }

    void show(void)
    {

        cout<<"Derived wheels number: "<<wheel<<endl;
        //Base::show();
        cout<<"Derived fuel type: "<<fuelType<<endl;
    }

    void test()
    {

        cout<<"Testing object slicing"<<endl;
    }

};


int main()
{
    Derived d("petrol", 4);
    d.fuelType = "High octane";
   // Derived &p = d;
    //d.show();
    //p.show();
    //Derived* q = &d;
    //q->show();
    //Base* b;
    //b->show();
   Base* r = &d;
    r->show();
    r->


    Base b2 = d; //object slicing
    b2.show();

    return 0;
}
