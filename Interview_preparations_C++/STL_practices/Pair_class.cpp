#include <iostream>
using namespace std;

class Hello
{

private:
    int password;
    string name;
public:
    setHello(int p, string s)
    {
        password = p;
        name = s;

    }
   void getHello()
   {

       cout<<"\nName: "<<name;
       cout<<"\nPassword: "<<password;
   }


};

pair<int, int> p1;
pair<int, string> p2;
pair<string, string> p3;
pair<int, Hello> p4;
int main()
{
    p1 = make_pair(1, 50);
    p2 = make_pair(2, "Krishna with Sudarshan");
    p3 = make_pair("Krishna", "Radha");
    Hello H;
    H.setHello(33, "Subrata");
    p4 = make_pair(33, H);
    cout<<p1.first<<"\t"<<p1.second<<endl;
    cout<<p2.first<<"\t"<<p2.second<<endl;
    cout<<p3.first<<"\t"<<p3.second<<endl;
    cout<<p4.first<<"\t";
    Hello K = p4.second;
    K.getHello();
    cout<<endl;

return 0;
}
