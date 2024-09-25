#include <iostream>
#include <vector>
using namespace std;


//vector <double> Krishna;
vector <double>Krishna = {10, 20, 5222};


int main()
{
//int i = 0;
    Krishna.push_back(10);
    Krishna.push_back(20);
    Krishna.push_back(30.2);
   // Krishna.pop_back();

    for(auto i = Krishna.begin(); i!=Krishna.end();i++) //auto automatically takes the type returned by the function right side of the assignment operator
        cout<<*i<<" ";

            Krishna.pop_back();

    //cout<< Krishna[i];
    //cout<<Krishna[2];
    //Krishna.clear();
    cout<<endl;
    for(auto i = Krishna.begin(); i!=Krishna.end();i++)
        cout<<*i<<" ";
    //cout << "Hello world!" << endl;

    Krishna.clear();
    cout<<endl<<"After clearing with clear() function: ";

     for(auto i = Krishna.begin(); i!=Krishna.end();i++)
        cout<<*i<<" ";


    cout<<endl<<endl;
    cout<<"When accessed like a normal array the elements are still present. \nHence, it understood that the clear function only removes the link(pointer) to the array.\n";
    for(int i = 0; i<3;i++)
        cout<<Krishna[i]<<"\t";

        cout<<endl;
    return 0;
}
