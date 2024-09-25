#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
        return false;
        map <char, char> mapS, mapT;
        for(int i = 0; i<s.length();i++)
        {
           if(mapS[s[i]] && mapS[s[i]]!=t[i])
            return false;

           if(mapT[t[i]] && mapT[t[i]]!=s[i])
            return false;

            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];

        }
        return true;

        }
};

int main()
{
    Solution so;
    cout<<so.isIsomorphic("Egg", "Kll");
    //cout << "Hello world!" << endl;
    return 0;
}
