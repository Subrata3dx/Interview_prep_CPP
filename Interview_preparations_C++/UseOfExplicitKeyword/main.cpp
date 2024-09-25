#include <iostream>
using namespace std;



class Complex
{

private:
    double real, imag;

public:

    Complex() //get called when no argument constructor is used to create an object.
    {
        real=imag=0.0;
    }

   Complex(double r, double i = 5.5) //gets called when one argument constructor or any double value is assigned to an object.
   // like, c = 1.5, here c is an object of class Complex. Because it has default argument.
    {

        real = r;
        imag = i;
    }


    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;

        return temp;

    }

    void display()
    {

        cout<<endl<<real<<'\t'<<imag;
    }
};


int main()
{

   Complex c1(1.5, 3.5), c2;
   //Complex c3(); // This is not a constructor call. It is actually a function declaration with the name "c2" which returns a Complex type of object
   c2 = c1+1.25;
   // c2 = (Complex)2.5; //reassignment
   c2.display();
   cout<<"";

    return 0;
}
