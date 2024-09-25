#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

class TwoSum
{
private:
    vector<int> ans;
    unordered_map<int, int> mp;
public:
   int count = 0;
    vector<int> findTwoSum(const vector<int>&v, int tgt)
    {
       /* for(unsigned int i =0; i<v.size(); i++)
        {
            mp[v[i]] = i;
        }

        for(unsigned int i = 0; i<v.size(); i++)
        {
            int need = tgt - v[i];
            if(mp.find(need)!= mp.end())
                {
                ans.push_back(i);
                ans.push_back(mp[need]); //mp.find(need) returns a pointer, so dereferencing it
                }
        }
        */

        for(int i = 0; i<v.size(); i++) //this also good, because it is not O(n*n) iteration.
        {
            count++;
            for(int j = i+1; j<v.size(); j++)
                {

                count++;
                if(v[i] + v[j] == tgt)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }

        return ans;
    }
};
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2;
    TwoSum tw;
    v2 = tw.findTwoSum(v, 50);
    for(auto x: v2)
    cout << x <<" ";
    cout<<endl<<tw.count;
    return 0;
}
