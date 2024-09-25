#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
using namespace std;


class Solution {
public:
       bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int>map1;
        map<int, int>map2;
        int v, x;
        for(int i=0; i<nums.size();i++)
        {

            if(map2[nums[i]]>0)
            {
                v = map1[nums[i]];
                if(abs(i-v)<=k)
                return true;
            }

            map1[nums[i]]=i;
            map2[nums[i]] += 1;
            x=map2[nums[i]];


        }

        return false;
    }
};


/*
class Solution {
public:
       bool containsNearbyDuplicate(vector<int>& nums, int k) {
 unordered_map<int,int> mp;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            // mp.count() will tell whatever ith index that I want, have I seen it before?
            if(mp.count(nums[i]))
            {
                // if I have already seen this number, then check for condition abs(i - j) <= k
                if(abs(i-mp[nums[i]])<=k)
                    return true;
            }
            // if I have not seen this number before, insert the number with its position in the map
            // and if the number is already present in the map, then update the position of that number
            mp[nums[i]] = i;
        }
        // after the complete traversal, if we don't find a pair to satisfy the condition, return false
        return false;
    }
};
*/
int main()
{
    Solution so;
    vector <int> nums{1,2,3,1,2,3};
    cout<<so.containsNearbyDuplicate(nums, 2);
    //cout << "Hello world!" << endl;
    return 0;
}
