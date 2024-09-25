#include <iostream>

using namespace std;

class Papa
{
protected:
   int cash;
   int age;
   string name;

public:

  Papa(int a, int c, string s)
   {

       cash = c;
       age = a;
       name = s;
   }

Papa()
{

}

   void display()
   {

       cout<<"Name "<<name<<endl;
       cout<<"Cash "<<cash<<endl;
       cout<<"Age "<<age <<endl;


    }


};

class Beta : public Papa
    {
public:
  Beta (int a, int c, string s) : Papa(10, 456445421, "Narayan")
    {

       cash = c;
       age = a;
       name = s;
    }

    void display()
   {

       cout<<"Name "<<name<<endl;
       cout<<"Cash "<<cash<<endl;
       cout<<"Age "<<age <<endl;


    }

};

int main()
{
    Beta obj(35, -1000000, "Subrata");
    Papa p = obj;
    p.display();

    return 0;
}
