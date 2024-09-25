#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <float> vf (4, 44.23); //creates a vector with 4 elements each 44.23
    for(int i =0; i<vf.size();i++) //size() function returns the number of elements in the vector
    {

        cout<<vf[i]<<"\t";  //we can also print elements of a vector as we do with array
    }
    vector <int> v1;
    vector <string> vs {"Radha", "Krishna", "Gouranga"}; //it is a sting vector with initialization
    cout<<endl<<vs.front(); //returns the front element of the vector
    cout<<endl<<vs.at(2); //returns the element pointed by at()
    cout<<endl;
    cout<<"Vector capacity: "<<v1.capacity(); //returns the capacity of the vector
    v1.push_back(10); //adds the argument at the end of the vector
    v1.push_back(20);

    for(int i =3; i<10;i++)
    {

        v1.push_back(i*10);
    }
    cout<<endl;
    for(int i =0; i<v1.size();i++)
    {

       cout<< v1.at(i)<<"\t";
    }
    cout<<endl<<"Vector capacity:" <<v1.capacity();
    v1.pop_back(); //deletes the last element of the vector
    v1.pop_back();
    cout<<endl<<"Vector size:"<<v1.size();
    v1.pop_back();
    cout<<endl<<"After popping back capacity: "<<v1.capacity();

    cout<<endl<<"Vector size:"<<v1.size();
    cout<<endl<<"End element of the vector v1 is: "<<v1.back(); //returns the last elements of the vector.
    //v1.clear();//clears all the element in the vector
    cout<<endl<<v1.size();

    //cout<<endl<<v1.front();
    cout<<endl;


    for(int i =0; i<3;i++) //size() function returns the number of elements in the vector.
    {

        cout<<v1[i]<<"\t";  //we can also print elements of a vector as we do with array.
    }

    vector <int> ::iterator it = v1.begin(); //this is how iterator is declared, here "it" is the object and begin() function returns address of the v1.
    v1.insert(it+1, 100); //insert data at the specified location.

    cout<<endl;

    for(int i =0; i<3;i++) //size() function returns the number of elements in the vector.
    {

        cout<<v1[i]<<"\t";  //we can also print elements of a vector as we do with array.
    }

return 0;
}
