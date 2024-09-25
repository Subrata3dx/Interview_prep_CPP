#include<iostream>
using namespace std;

class UseThis
{

private:
    int age;

public:
    UseThis(int age)
    {
        this->age = age;
    }

    void get()
    {
        cout<<"Age ="<<age<<endl;
    }

    void change(UseThis* t)
    {
        this->age = t->age;

    }

    ~UseThis()
    {
        cout<<endl<<"Destructor is called";
    }
};
