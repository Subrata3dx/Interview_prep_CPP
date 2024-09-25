#include <iostream>
#include <utility>

using namespace std;


void process(int& r)
{

    cout<<"lvalue reference: "<<r<<endl;
}

void process(int&& r)
{
    cout<<"rvalue reference: "<<r<<endl;
}

//forwarding function forwards the actual argument to the respective process function
template<typename T>
void test(T&& arg)
{
    process(forward<T> (arg));
}

int main()
{
    int x = 10;
    test(x); //calling by lvalue
    test(20); //calling by rvalue
    return 0;
}
