#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int s = nums.size();
        vector<vector<int>> v;
        int t = 0;

        for(int i = 1; i<s-1; i++)
        {
            for(int j = 0, k = s-1; j<s && k>=0; j++, k--)
            {
                if(i != j && i != k && j !=k)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        v[t++] = {nums[i], nums[j], nums[k]};
                    }
                }
            }
        }
        return v;
    }
};

int main()
{
    Solution so;
    vector<int> num {-1,0,1,2,-1,-4};
    vector<vector<int>> v;
    v = so.threeSum(num);
    for(auto x : v)
    {
    for(int i = 0; i<3;i++)
        cout<<x[i]<<", ";
    }

    return 0;
}
