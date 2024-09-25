#include <iostream>
#include<string>
using namespace std;

void rotateLeft1(string &str, int k)
{
    int len = str.size();
    int step = k%len;


    cout<<str.substr(len - step)<<endl; //extracts len-step to the end of string
    cout<<str.substr(0, len-step)<<endl;
    str = str.substr(len - step) + str.substr(0, len-step);
    //string temp = str.substr(len - step) + str.substr(0, len-step);
    //str = temp;

}


void rotateLeft2(string &str, int k)
{
    int len = str.size();
    int step = k%len;

    string temp = str+str;
    str =  temp.substr(len-step, len);
}


void rotateRight(string &str, int k)
{
    int len = str.size();
    int step = k%len;

    string temp = str+str;
    str =  temp.substr(step, len);
}



int main()
{
    string str = "ABCDE";
    string str1= str;
    int rot = 4;
    cout<<"----------------Left rotation:------------------"<<endl;
    cout <<"Before rotation: "<< str << endl;
   // rotateLeft1(str, rot);
    //cout <<"After "<< rot << " rotation left with rotate1 function : "<< str << endl;
    rotateLeft2(str, rot);
    cout <<"After " << rot<< " rotation left with rotate2 function: "<< str << endl;

    cout<<endl;
    cout<<"----------------Right rotation:------------------"<<endl;
    //string str1 = "ABCDE";
    cout <<"Before rotation: "<< str1 << endl;
    rotateRight(str1, rot);
    cout <<"After " << rot<< " rotation right with rotateRight function: "<< str1 << endl;

    cout<<endl;

    return 0;
}
