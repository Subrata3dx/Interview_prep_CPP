#include <iostream>

using namespace std;

class ConOpr
{
  private:
      double var1;
      double var2;

  public:
      ConOpr(double x, double y)
      {
          var1 = x;
          var2 = y;
      }

    operator int() //conversion operator
    {
        return var2-var1;
    }


    double getVal()
    {
     return var2-var1;
    }

};

int main()
{
    ConOpr obj(10.5, 30);
    cout<<obj.getVal();
    int d = obj; //conversion from object type to primitive type
    cout <<endl<<d<< endl;
    return 0;
}
