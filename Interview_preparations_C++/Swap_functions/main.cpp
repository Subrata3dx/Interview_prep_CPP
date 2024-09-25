#include <iostream>

using namespace std;

class Swap
{

public:
void swap_Ref(int &x, int &y)

{
    std::cout<<"\nFrom call by reference swap function:";
    int temp = y;
    y=x;
    x = temp;
}

void swap_Add(int *x, int *y)

{
    std::cout<<"\nFrom call by Address swap function:";
    int temp = *y;
    *y=*x;
    *x = temp;
}

};

int main()
{
    Swap S;
    int a = 10, b = 20;
    std::cout<<"\nBefore swap: \n a = "<<a<<"\tb = "<<b;
    S.swap_Ref(a, b);
    std::cout<<"\nAfter swap with Reference: \n a = "<<a<<"\tb = "<<b;
    S.swap_Add(&a, &b);
    std::cout<<"\nAfter swap with Address: \n a = "<<a<<"\tb = "<<b;
    return 0;
}


