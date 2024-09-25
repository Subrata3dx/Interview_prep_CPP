#include <iostream>

using namespace std;
//normal function template
template <class X> void add(X a, X b)
{
    cout<<"Result: "<<a+b<<endl;
}

//function template with return
template<class T> T multi(T a, T b)
{
    return a*b;
}

//function template for different data types
template<typename U, typename V> void checkType(U a, V b) //in place of "class", we can also write "typename" from C++ 11
{

    cout<<"first argument: "<<a<<endl;
    cout<<"Second argument: "<<b<<endl;
}

//function template with default values
template<typename X> void defVal(X a, X b=10, X t = 1) //when using the default parameters, they always must be on right side,
//and once a parameter is made default, all other parameters of its right must have default values
{
    cout<<"Subtraction value: "<<b-a-t<<endl;

}


//template specialization for functions

template<typename D> void div(D a, D b)
{
    cout<<"Division result from general template: "<<a/b<<endl;
}

template<> void div(int a, int b)
{
    cout<<"Division result from specialized template: "<<a/b<<endl;
}



int main()
{
    //calling normal template function without return value

    add<double>(2.5, 3.5);
    add(1, 2);  //Automatic type deduction from c++ 17. We do not require to mention the type of arguments <int, int>

    //function with return values
    cout<<"Multiply: "<<multi(2, 4)<<endl;
    cout<<"Multiply: "<<multi(5.2, 2.5)<<endl;

    //function with different data types
    checkType(5.66, "Hari");

    //function with default values
    defVal(10, 20, 2);
    defVal(5, 10);
    defVal(2);

    //calling specialized function
    div<int>(10, 5); // it is not div<int, int>(10, 5), we just need inform compiler that we are calling specialized template in which data types are int
    return 0;
}
