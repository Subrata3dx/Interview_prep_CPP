#include <iostream>

using namespace std;

class Aa
{
public:
    virtual void test()
    {

    };
};

class Bb:public Aa
{
public:
    void test()
    {
        cout<<"from Bb";
    }
};

int main()
{
    Aa *b = new Bb();

    b->test();
    return 0;
}
