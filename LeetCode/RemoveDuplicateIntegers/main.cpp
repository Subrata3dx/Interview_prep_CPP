#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
        int j =0;
        for(int i = 1; i< nums.size();i++){
            while(nums[j]==nums[i] && i<nums.size())
            i++;
            if(i<nums.size())
            nums[++j] = nums[i];
        }
        return j+1;
    }
};

int main()
{
    vector <int> nums{0,0,1,1,1,2,2,3,3,4};
    Solution so;
    cout<<so.removeDuplicates(nums);
    cout<<endl;
    for(int i =0; i<nums.size();i++)
        cout<<nums[i] <<" ";

    return 0;
}
