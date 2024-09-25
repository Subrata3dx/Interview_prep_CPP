#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string a;
    string b;
    stringstream ss;
    int x;
    cout << "Enter a word and a digit" << endl;
    cin>>b;
    cin>>x;
    //getline(cin, a);
    //ss.str(b);
    ss<<b<<x<<"Radharani";
    a=ss.str();
    cout<<"You entered: "<<a<<endl;
    return 0;
}
