#include <iostream>
using namespace std;

class Car
{

private:
    string model;
    mutable string owner; //must declare mutable if you want to change it in a const object
    int yofmfg;
    string regno;
    int *p;
public:
    Car()
    {

    }

    Car(const Car& obj) //copy constructor
    {
        this->model = obj.model;
        this->owner = obj.owner;
        this->yofmfg = obj.yofmfg;
        this->regno = obj.regno;
        p=new int[3];
        for(int i = 0; i<3; i++)
        this->p[i] = obj.p[i];
    }

    Car(string m, string o, int y, string r)
    {
        model = m;
        owner = o;
        yofmfg = y;
        regno = r;
        p=new int[3];
        for(int i = 0; i<3; i++)
        {

            p[i] = (i+1)*10;
        }
    }

    void changeOwner(string o) const
    {

        owner = o;
    }

    void changeRegno(string r)
    {
        regno = r;
    }

    void display() const
    {

        cout<<"Model: "<<model<<endl;
        cout<<"Owner: "<<owner<<endl;
        cout<<"Year of manufacture: "<<yofmfg<<endl;
        cout<<"RegNo.: "<<regno<<endl;

        cout<<endl;
        for(int i = 0; i<3; i++)
        {
            cout<<p[i]<<" ";
        }
    }
    ~Car()
    {
        delete[] p;
        cout<<endl<<"Destructor called"<<endl;
    }
};
int main()
{

    const Car objc("Baleno", "Prithu", 2016, "TS07HA5398");
   objc.changeOwner("Archi");
  // objc.changeRegno("TS08PA1358");
   objc.display();
   const Car c2 = objc;
   cout<<endl;
  c2.display();

    return 0;
}
