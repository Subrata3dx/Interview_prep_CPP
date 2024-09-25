#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
    string st = "abcdecghi";
    string res = "";
    int count = 0; //to count number of iteration
    string temp = "";

   for(int i = 0; i<st.length(); i++)
   {
      char ch = st[i];

       if(temp.length()>0) //if temp has characters, we check if 'ch' is matching with any of the character.
       {
           bool existchar = false;
           for(int j = 0; j<temp.length(); j++) //iterating on the temp.
           {
               count++;
               if(ch == temp[j])
               {
                   existchar = true;

                   if(temp.length()>res.length())
                    res = temp; //saving the longer value until now

                   temp = temp.substr(j+1, temp.length()-1-j); //makes a substring from the next character of j till the end of the temp
                   temp = temp+ch; //adding ch to temp
                   break; //breaks the inner for loop
               }


           }

           if(existchar==false) //adds next character to the temp
           {
               temp=temp+ch;

           }

          //else //if more than one parts are of the same length, it prints the last occurrence
           //{
             //  if(temp.length()>res.length())
               //{
                 // res = temp;

               //}
              // temp = "";
           //}

           }


       else
        temp = ch;


        count++;

   }


if(temp.length()>res.length())
    {
            res = temp;
    }


    cout << res.length() << endl;
    cout << res << endl;
    cout <<"Number of iteration:" <<count << endl;
    getchar();
    return 0;
}

*/


int main()
{

    string str = "Haribbolomanaktuhfh";
    string temp ="";
    temp += str[0];
    string res="";

    for(int i = 1; i<str.length(); i++)
    {
        char ch = str[i];

        for(int j = 0; j<temp.length(); j++)
        {
            if(ch==temp[j])
            {
                if(temp.length()>res.length())
                {
                    res = temp;
                }
                temp = temp.substr(j+1, temp.length()-1-j);

                break;
            }

        }

        temp+=ch;
    }

    cout<<(res.length()>temp.length()?res:temp);

}
