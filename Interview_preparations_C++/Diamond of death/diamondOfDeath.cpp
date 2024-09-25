#include<iostream>
using namespace std;


class A
{
int hn;
string area;

public:
void setDetails(int a, string s)
{
hn = a;
area = s;
}

void getDetails()
{
    cout<<"House number: "<<hn<<endl;
    cout<<"Area name: "<<area<<endl;

}

};

class B1: virtual public A
{
int hn;
string area;

public:
void setDetailsB1(int a, string s)
{
hn = a;
area = s;
}

void getDetailsB1()
{
    cout<<"House number: "<<hn<<endl;
    cout<<"Area name: "<<area<<endl;

}
};


class B2: virtual public A
{
int hn;
string area;

public:
void setDetailsB2(int a, string s)
{
hn = a;
area = s;
}

void getDetailsB2()
{
    cout<<"House number: "<<hn<<endl;
    cout<<"Area name: "<<area<<endl;

}
};

class C: public B1, public B2
{
/*int hn;
string area;

public:
void setDetails(int a, string s)
{
hn = a;
area = s;
}

void getDetails()
{
    cout<<"House number: "<<hn<<endl;
    cout<<"Area name: "<<area<<endl;

}

*/

};


int main()
{

    A a;
    C c;
    B1 b;
    B2 b2;
    a.setDetails(510, "PNGOS");
    a.getDetails();

    b.setDetails(511, "LNGOS");
    b.getDetails();

    c.setDetails(512, "NNGOS");
    c.getDetails();

    cout<<"\nSize of A: "<<sizeof(a);
    cout<<"\nSize of B1: "<<sizeof(b);
    cout<<"\nSize of B2: "<<sizeof(b2);
    cout<<"\nSize of C: "<<sizeof(c);
    return 0;
}
