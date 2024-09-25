#include <iostream>

using namespace std;

template <typename T> T Tmax(T x, T y) // template <class T> T Tmax(T x, T y) //also produces same result
{
    return (x>y)?x:y;

}

template <class A, class B, class C> B test(A a, B b, C c)
{
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
    return 10+b;

}

int main()
{
    //cout<<max(10, 20)<<endl;
    //int a = 12,b = 20;
    cout<<Tmax<int>(78, 46)<<endl;
    cout<<Tmax(78.23, 4.46)<<endl;
    cout<<test("Haribol", 20.133, 30);


    return 0;
}
