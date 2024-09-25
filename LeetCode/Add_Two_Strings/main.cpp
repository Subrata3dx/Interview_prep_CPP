#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector <int> sum;
        int k;
        //int j = 0;
        for(int i = 0; i<(m+n);i++)
        {



            if((i<=m) && (i<=n))
            {


                if(nums1[i]==nums2[i])
                {

                    sum.push_back(nums1[i]); //sum[j] = nums1[i]; //for array notion
                    sum.push_back(nums2[i]); //sum[++j] = nums2[i];
                }
                else
                {
                    k = nums1[i]<nums2[i]?nums1[i]:nums2[i];
                    sum.push_back(k);
                    k = nums1[i]>nums2[i]?nums1[i]:nums2[i];
                    sum.push_back(k);
                }


            }

            else if ((i<=m)&&(i>n))
            {
                k = nums1[i];
                sum.push_back(k);
            }
            else if ((i>m)&&(i<=n))
            {
                k = nums2[i];
                sum.push_back(k);
            }
        }
nums1=sum;

    }
};

int main()
{
Solution S;
    vector <int> one{1, 3, 5, 7};
    vector <int> two{2, 2, 4, 6, 8};
    S.merge(one, 4, two, 5);
    for(int i = 0; i<9;i++)
    {

        cout<<one[i]<<"\t";
    }


    return 0;
}
