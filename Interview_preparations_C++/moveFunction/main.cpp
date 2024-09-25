#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Govinda
{

    int *age;
    int size;
    unordered_map<int, string> m;

public:

    Govinda()
    {}

    Govinda(int a):size(a)
    {
        age = new int[size];
        for(int i = 0; i<size; i++)
        m[i] ="K"+ to_string(i);

    }


   // move constructor, it is called by move function. If you do not define move constructor compiler provides a default constructor, which is not meant for user defined data types and pointer related members

   Govinda(Govinda&& obj) noexcept
    {
        cout<<"From rvalue constructor"<<endl;
        if(obj.age!=nullptr)
        this->m = obj.m;
        size = obj.size;
        obj.age = nullptr;

    }



    void show()
    {
        cout<<"Age: ";
        for(int i = 0; i<size; i++)
        cout<<m[i]<<" ";
        cout<<endl;
    }

    ~Govinda()
    {
        delete age;
    }

};

int main()
{
    int age = 10;
    Govinda g(age);

    g.show();
    Govinda h = move(g); //

    h.show();





    return 0;
}
