#include <iostream>
#include <unordered_map>

using namespace std;


bool isAnagram(string s, string t)
{
    if(s.length() != t.length())
        return 0;

    /*unordered_map<char, int> map1;

    for(int i = 0; i<s.length(); i++)
    {
        map1[s[i]]++;
    }

    for(int i = 0; i<t.length(); i++)
    {
       if(map1.find(t[i])!=map1.end() && map1.find(t[i])->second !=0)
          map1[t[i]]--;
        else
            return false;
    }
*/
     //for(auto x: map1)
       // if(x.second != 0)
        //return false;
unordered_map<char, int> map1, map2;

    for(int i = 0; i<s.length(); i++)
    {
        map1[s[i]]++;
        map2[t[i]]++;
    }

    int k = map1.size();
    cout<<"map1 size: "<<k<<endl;
    int i = 0;
    for(;i<map1.size(); i++) //I am not understanding why value of i goes to 70, if you use 'z' as any character in any of the maps the i value will be 122. It should be 3, the size of map1.
    {

       cout<<"i=" <<i<<" map1[i] = "<<map1[i]<<"\tmap2[i] = "<<map2[i]<<endl;
       if(map1[i] != map2[i])//evaluates values of both maps using the keys
       {

            return false;
        }

    }
    cout<<endl<<"Value of i: "<<i<<endl;


    return true;

}


int main()
{
    cout << isAnagram("EBA", "ABE") << endl;
    return 0;
}
