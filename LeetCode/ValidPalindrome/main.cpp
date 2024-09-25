#include <iostream>
using namespace std;

bool isValid(string s)
{
   string str;

   cout<<"String size: "<<s.size()<<endl;
   for(unsigned int i = 0; i<s.size(); i++)
   {
       char c = s[i];
       if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
       {
       // c = tolower(c);
        str+=tolower(s[i]);
       }
   }

       if(str.size()<2)
        return true;
       else
       {
           for(unsigned int i = 0; i<str.size()/2; i++)
           {
               if(str[i]!=str[str.size()-1-i])
                return false;
           }
       }
    return true;
   }




int main()
{
    cout <<isValid("Hari9009raH");
    return 0;
}
