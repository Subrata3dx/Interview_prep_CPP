#include <iostream>

using namespace std;


class Test
{
private:
    int age;
    string name;


    Test()
    {
    age = 35;
    name = "Haribol";
    }

public:

    static Test* instance()
    {
       Test *t = new Test();
       return t;

    }

    void show()
    {
        cout<<name<<" "<<age;

    }
};

int main()
{
    Test *t = Test::instance();
    //Test t;
    t->show();
    return 0;
}
