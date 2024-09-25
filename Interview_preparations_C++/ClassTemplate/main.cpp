#include <iostream>
#include <typeinfo>
using namespace std;


//normal template class
template<class T> class Test
{

private:
    T a;
    T b;

public:
    //Test()
    //{}

    Test(T x, T y): a(x), b(y){}

    void show()
    {

        cout<<"Value of a: "<<a<<" "<<"Value of b: "<<b<<endl;
    }
};

//specialized template class

template<> class Test <int> //mentioning type is important here in our case it is <int>
{

    double a;
    int b;

public:
    Test(int x, int y): a(x), b(y) //it is not that we can only use integer type in our specialized class
    {}

    void show()
    {
        cout<<"From specialized class.."<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};



int main()
{
    //calling specialized template class
    Test <int>u(10, 55); //compiler first searches for specialized class if we declared any specialized class in our code
    u.show();


    //calling general template class
    Test <double>v(10.5, 20.6);

    v.show();
    return 0;
}
