#include <iostream>

using namespace std;

class father
{
protected:
    int car;
public:
    father()
    {

        car = 3;

    }
    int getCar()
    {
return car-1;

    }
};
class child:public father
{

    int bike;
public:
    child()
    {

        bike = 1;
    }
    int getBike()
    {

        return bike;
    }
};

int main()
{

child son;
cout<<"Son accessing father's car: "<<son.getCar()<<endl;
cout <<"Son has his own bike: "<<son.getBike() << endl;
    return 0;
}
