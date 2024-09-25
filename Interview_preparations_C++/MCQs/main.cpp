#include <iostream>
using namespace std;

#define SQUARE(x) (x)*(x) // SQUARE(x) x*x is wrong way of writing a preprocessing line

int main()
{
    //int new = -10; //new is a keyword so we cannot use it as variable.
    int a = 30;
    int& b = a;
    int c = 20;
    int& d = c;
    const int e = a; //you cannot change value of e

    int* f = &a;

    int*& x = f; //reference to pointer
    cout<<"Printing value using reference to pointer: "<<*x<<endl; //if you use only x it will print address just as f will do
    x = &c;
    cout<<"Printing value of pointer using reference (we can to it as it is now alias of pointer 'f') after changing the reference: "<<*f<<endl;

    *f = 500;
    a = 4;


   // cout<<*(f);
    //cout<<endl<<a;
    //int*

   // int ref[] = {b, d};
    //int& ref[] = {b, d}; // is not possible it is a reference array
    //cout<<ref[0];

    cout<<"Showing #define example: "<<SQUARE(3+2)<<endl;

    return 0;
}
