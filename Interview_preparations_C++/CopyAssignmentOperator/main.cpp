#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


class RollNo{

vector<int> roll;
    int num;
public:


    RollNo()
    {
    }


    RollNo(int x)
    {
        num = x;

    }

    //Copy constructor
    RollNo(RollNo &x)
    {

        cout<<"Copy constructor is called"<<endl;
        num = x.num;
        roll = x.roll; //shallow copy

    }

    //+ operator overloading
    RollNo operator +(const RollNo &y) const
    {
        RollNo temp;
        temp.num = y.num;
        for(int i = 0; i<temp.num; i++)
        temp.roll.push_back(this->roll[i] + y.roll[i]);
        return temp;

    }

    //= operator overloading
   RollNo& operator =(const RollNo& r)
    {
        cout<<endl<<"User defined copy assignment operator is called."<<endl;
        if(this == &r) //checking whether the same reference we are copying. it will save time if we are copying the same reference
            return *this;

            this->num = r.num;
            this->roll.clear();
            for(int i = 0; i<this->num; i++)
            this->roll.push_back(r.roll[i]); //deep copy


        return *this;

    }

    void addStudent()
    {

    for(int i = 0; i<num; i++)
        {
        roll.push_back((i+1)*10);
        }
    }

    void showStudent()
    {

        cout<<endl;

        for(auto x:roll)
        {

            cout<<x<<" ";
        }
    }
};


int main()
{

   // cout<<refP<<endl;
    RollNo r(5);
    r.addStudent();
    r.showStudent();
    RollNo s;
    s= r;
    s.showStudent();
    RollNo p(s);
    p.showStudent();

    RollNo x;
    x = (p + s);
    x.showStudent();
    return 0;
}



