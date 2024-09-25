#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{

    int len = nums.size();
    int step = k%len;

    reverse(nums.begin(), nums.begin()+(len-step));
    reverse(nums.begin()+(len-step), nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    rotateArray(v, 1);
    for(auto x: v)
    cout << x <<" ";
    return 0;
}
