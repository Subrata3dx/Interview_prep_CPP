#include <iostream>
#include <stack>
using namespace std;

class MinStack{
private:
    stack<int>st, minSt;
public:
    void push(int val)
    {
        st.push(val);

        if(!minSt.empty())
        minSt.push(min(minSt.top(), val));

        else
            minSt.push(val);
    }

    void pop()
    {
        minSt.pop();
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minSt.top();
    }

    //to check what minSt storeds
    void emptyMin()
    {

        while(!minSt.empty())
        {

            cout<<minSt.top()<<endl;
            minSt.pop();


        }

    }
};

int main()
{
    MinStack s;
    s.push(10);
    s.push(30);
    s.push(5);
    s.push(20);
    s.push(2);

    s.pop();


    //s.emptyMin();
    cout<<endl<<s.top();
    cout<<endl<<s.getMin();

    return 0;
}
