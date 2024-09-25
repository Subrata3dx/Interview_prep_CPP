#include <iostream>
using namespace std;

int a, b;
int main()
{
    void fun(int d, int e);

    void (*p) (int, int);

    p = &fun;

    (*p)(10, 20);

    cout<<a<<endl<<b;

    return 0;
}

void fun(int d, int e)
{
    a = d;
    b = e;

}
