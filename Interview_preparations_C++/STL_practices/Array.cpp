#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 5> my_array = {1,2,3,4,5};
    array <int, 5> my_array2 = {10,20,30};

    for(int i =0;i<5;i++)
    {
        cout<<my_array.at(i)<<"\t";
        //cout<<my_array[i]<<"\t";
    }


    cout<<endl<<"Front: "<<my_array.front();
    cout<<endl<<"Back: "<<my_array.back();
    cout<<endl<<"End: "<<my_array.end();
    my_array.fill(10);
    cout<<endl<<"After filling:"<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<my_array.at(i)<<"\t";
    }

    my_array.swap(my_array2);
    cout<<"\nAfter swapping:"<<endl;
    for(int i =0;i<5;i++)
    {
        cout<<my_array.at(i)<<"\t";
    }

    cout<<endl;
    cout<<"Size of my_array2: "<<my_array2.size();


    return 0;
}
