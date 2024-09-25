#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class GrpAna
{
private:
    unordered_map<string, vector<string>> mp;
public:
    vector<vector<string>> groupAna(vector<string> s)
    {
        for(auto x: s)
        {
            string temp = x;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(x);

        }

      vector<vector<string>> ans;
      for(auto y: mp)
      ans.push_back(y.second);
      return ans;
    }
};

int main()
{
    GrpAna objGrpAna;

   vector<string> anaStr = {"tea", "ate", "eat", "nat", "ant", "bat"};
   vector<vector<string>> a = objGrpAna.groupAna(anaStr);
   for(auto z: a)
   {
      for(auto x: z)
        cout << x << " ";

      cout<<endl;
   }

    return 0;
}
