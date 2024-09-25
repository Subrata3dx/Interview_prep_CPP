#include <iostream>
#include "Lend.cpp"
#include "Test.h"

using namespace std;
class aboutMe
{
    int age, netWealth;
    string gender, name, occupation, location;

public:
    aboutMe()
    {
        name = "Subrata Shil";
        gender = "Male";

    }

    void setAbout(string occ, string loc, int a)
    {
        occupation = occ;
        location = loc;
        age = a;

    }

    void putAbout(int t)
    {

        cout<<endl<<"My details:"<<endl<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Occupation: "<<occupation<<endl;
        cout<<"Living in: "<<location<<endl;
        cout<<"Total money lent: "<<t<<endl;
    }
};
int main()
{
    int totLent = 0;
    udhari Bardaa = udhari("Biswajit Shil", "Brother", 10000);
    udhari Bapan = udhari("Sankhadip DN", "Friend", 10000);
    Bardaa.getDetails();
    Bapan.getDetails();
    aboutMe I;
    I.setAbout("Tech writer", "Hyderabad", 33);
    totLent = Bardaa.getTotal() + Bapan.getTotal();
    I.putAbout(totLent);
    Test t;
    t.SetCounter(10);
    cout<<endl<<t.GetCounter();


    return 0;
}
