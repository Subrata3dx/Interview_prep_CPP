#include <iostream>

using namespace std;
class Solution
{

public:
    twoSum(int *num, int target)
    {
        int size = 5;//sizeof(num[]);
        for(int i=0; i<size;i++)
        {

        for(int j=0; j<size;j++)
        {
        if(i!=j)
        {
        if((num[i] + num[j]) == target)
        cout<<i<<" "<<j<<endl;
        }

        }
        }



    }

    Solution()

    {

    }


};

int main()
{
    int num[] = {2, 5, 3, 4, 7};
    cout<<sizeof(num)/sizeof(int)<<endl;
    int target = 6;
    Solution S;
    S.twoSum(num, target);
    return 0;

}
