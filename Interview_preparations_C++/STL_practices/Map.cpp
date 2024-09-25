#include<iostream>
#include <unordered_map>
using namespace std;


bool isAnagram(string s, string t)
{

    unordered_map<char, int> map1;
    if(s.length() != t.length())
        return 0;

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

   /* for(auto x: map1)
        if(x.second != 0)
        return false;
        */

    return true;
}

int main()
{
unordered_map<string, int> week;
week["Sun"] = 1;
week["Mon"] = 2;
week["Tue"] = 3;
week["Wed"] = 4;
week["Thu"] = 5;
week["Fri"] = 6;
week["Sat"] = 7;


unordered_map<string, int> ::iterator p = week.begin();

while(p!=week.end())
{
std::cout<<p->first<<"\t"<<p->second<<endl;
p++;
}

cout<<isAnagram("bi laajlw", "aawljbli ");

//auto x = week.find("Sat");
//cout<<endl<<week["Mon"];
//cout<<endl<<x->second;

return 0;
}
