#include <iostream>
#include <string.h>

using namespace std;

class complex
{
private:
    float real, imag, x;

public:
    complex()
    {

        real = imag = x= 0.0;
    }

    explicit complex(float r, float i = 10.5)
    /*if "explicit" keyword is used the constructor cannot be accessed during object creation.
    by declaring complex c1 = {10.2, 50.6}. Also during type conversion (primitive to user defined) it will not work.
    in the parameter list, i is assigned with a value (10.5 in this case) here,
    because in a type conversion if an object has only one value
    it uses the assigned value as default. like complex objects c2, c1. and c2 = c1 + 5.5; 5.5 is taken as the
    first argument for the complex class constructor.*/

    {

        real =r;
        imag = i;
        //x = t;
    }

    complex operator + (complex c)
    {
        complex t;
        t.real = real + c.real;
       t.imag = imag + c.imag;
        //t.x = x + c.x;
        return t;
    }

    void display()
    {

        cout<<endl<<real<<" "<<imag<<endl;
    }
};

class car
{

private:
    char model[20];
    mutable char owner[30];
    int mfg_yr;
    mutable char regno[10];

public:
    car(char *m, char *o, int y, char *r)
    {
        strcpy(model, m);
        strcpy(owner, o);
        mfg_yr = y;
        strcpy(regno, r);
    }

    void changeowner (char* o) const
    {

        strcpy (owner, o);
    }

    void changeReg(char* r) const
    {

        strcpy(regno, r);
    }

    void display() const
    {
        cout<<endl<<model<<endl<<owner<<endl<<mfg_yr<<endl<<regno<<endl;
    }

};

int main()
{
    cout<<endl<<"The following data is from the Complex class to show explicit keyword usage."<<endl;
    //complex c1 = {8.5, 5.5};
    complex c1 (7.5, 4.5), c3, c2;
    c3 = c1 + c2;
    //c3 = c1 + 55.5;
    c3.display();

    cout<<endl<<"The following data is from the mutable class."<<endl;

    const car benz ("ZX", "GOD", 1989, "TS07HA4583");
    benz.display();
    benz.changeowner("Krishna");
    benz.changeReg("111");
    cout<<"After changing owner and registration:"<<endl;
    benz.display();

    return 0;
}
