#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Happy
{



public:

bool checkHappy(int num)
    {
    unordered_map<int, int> mp;
    int temp = num;
    int sum;
       while(true)
       {
        mp[temp]=1;
        sum = 0;
        while(temp>0)
        {
            int tmp = temp%10;
            sum+=(tmp*tmp);
            temp = temp/10;
        }

        if(sum==1)
            return true;

        if(mp[sum]==1)
            return false;

        temp = sum;

       }

        return 0;
    }

};

int main()
{
    /*int num;
    vector<int>v;
    Happy obj;
    cout<<"Enter a number to find out whether all numbers from it to 0 are happy numbers: "<<endl;
    cin>>num;
    for(int i = num; i>0; i--)
    if(obj.checkHappy(i))
    v.push_back(i);

    if(v.size()==0)
        cout<<"No happy number in this range"<<endl;
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl<<endl;
*/
pair<int, int> p1;
    unordered_map<int, int> x;
    x[10] = 1;
    x[10]++;
    p1 = make_pair(20, 4);
    try
    {
    p1 = make_pair(30, 5);
    }
    catch(...)
    {
    cout<<"Some error";
    }
   x.insert(p1);
    cout<<x.count(20)<<endl;
    if(x.find(20)!=x.end())
    try
    {
        cout<<"Checking find function: "<<x.find(20)->first<<endl;
    }

    catch(...)
    {
    cout<<"Some error in find function";
    }
    cout<<x.count(10)<<endl;
    cout<<x[10]<<endl;
    return 0;
}
