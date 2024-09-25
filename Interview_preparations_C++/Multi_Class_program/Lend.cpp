#include<iostream>
using namespace std;

void update(void);

class udhari
{

private:
    string name;
    int tot_due;
    int given, taken;
    string relation;
public:

    udhari(string n, string r, int g, int t = 0)
    {
        name = n;
        relation = r;
        given = g;
        taken = t;
        update();

    }

    void update()
    {

        tot_due = given - taken;
    }

    void lent(int g)
    {
        given = g;
        update();

    }

    void took(int t)
    {
        taken = t;
        update();

    }

    int getTotal()
    {

        return tot_due;
    }

    void getDetails()
    {


        cout<<endl<<name<<endl<<relation<<endl<<tot_due<<endl;
    }
};
