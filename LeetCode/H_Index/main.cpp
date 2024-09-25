#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
    sort(citations.rbegin(), citations.rend());
    /*for(int i =0; i<citations.size();i++)
    {

        cout<<citations[i]<<"\t";
    }
    cout<<endl;
    */
    int k;
    int h = 0;
    while (h < citations.size() && (k = citations[h]) > h) {
        h++;
    }
    return h;
}
};


int main()
{
    Solution so;
    vector <int> citations {3, 0, 6, 5, 1};
    cout<<so.hIndex(citations);


    return 0;
}
