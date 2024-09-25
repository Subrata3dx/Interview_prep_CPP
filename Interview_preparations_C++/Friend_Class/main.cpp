#include <iostream>

using namespace std;


class First
{
private:
    long test;
public:
    void setT(long k)
    {
        test  = k;
    }

    long geT()
    {
        return test;
    }
    friend class Second;
};

class Second
{

public:
    First hari[3];

    void datavalue(){
    for(int i = 0; i<3;i++)
    {

        hari[i].setT((i+1)*10);
    }

    for(int i = 0; i<3;i++)
    {

        cout<<hari[i].test<<endl;
    }
    }

};
int main()
{
    Second s;
    s.datavalue();

    return 0;
}
