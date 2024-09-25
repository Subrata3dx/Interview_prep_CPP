#include <iostream>

using namespace std;


struct sample
{

    int a;
    float b;
};


int main()
{
int sample::*p1 = &sample::a;
float sample::*p2 = &sample::b;

sample so = {10, 3.4};
cout<<endl<<so.*p1<<endl<<so.*p2; //.* is called pointer to member. Using structure variable "so" it accesses the member and dereferences simultaneously

sample *sp; //creating structure pointer
sp=&so;
cout<<endl<<sp->*p1<<endl<<sp->*p2; //->* is called pointer to member. Using structure pointer "sp" it accesses the member and dereferences simultaneously

cout<<endl<<"Assign new values using variable and pointer"<<endl;
    so.*p1 = 20;
    sp->*p2 = 6.5;
    cout<<endl<<so.*p1<<endl<<so.*p2;
    cout<<endl<<sp->*p1<<endl<<sp->*p2;

cout<<endl<<"Initializing values in a array of structures and printing values using variable and pointer"<<endl;
    sample soarr[] = {{15, 82.4}, {28, 66.5}, {45, 99.8}};
    for (int i = 0; i<=2; i++)
    {

        cout<<endl<<soarr[i].*p1<<endl<<soarr[i].*p2;
    }


    return 0;
}
