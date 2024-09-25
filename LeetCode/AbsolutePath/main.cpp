#include <iostream>
#include <stack>
#include <vector>
using namespace std;

string makeSimple( string &s)
{
    string ans;
    stack<string> st;
    for(int i = 0; i<s.length(); i++)
    {

       char ch = s[i];
       if(s[i]=='/')
            continue;
       string temp;
       while(i<s.length() && s[i]!= '/')
       {
           temp = temp + s[i];
           i++;
       }

       if(temp==".")
        continue;

       if(temp=="..")
       {
           if(!st.empty())
            st.pop();
       }
       else
        st.push(temp);
    }

    while(!st.empty())
    {
        ans = '/'+st.top() + ans;
        st.pop();
    }

    if(ans.length()==0)
        return "/";
    else
        return ans;




}
int main()
{
    string s = "/hari/har/krishna.amg/radha//.../madhav/../gopal";
    cout << makeSimple(s)<< endl;
    return 0;
}
