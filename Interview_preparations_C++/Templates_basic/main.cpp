#include <iostream>
using namespace std;


template<class x> x add(x a, x b)
{
    return a+b;
}

template <class gene> class TestTemplate
{
  private:

    struct list1
    {
    int var1 = 5;
    gene var2[5];
    };
    list1 *s;
    int i = 0;

  public:
    TestTemplate()
    {
        //s->var1 = a;

    }

    void setList1(gene x)
    {

        for(int j = 0; j<s->var1; j++)
        {
            if(i==j)
            {
                s->var2[i] = x;

            }


        }
        i++;
    }

    void getList1(int k)
    {

        for(int j = 0; j<i; j++)
        {
            if(k==j)
            {
                cout<<s->var2[j];

            }

        }
    }

    void deleteList1(int k)
    {
        if(k>i)
        {
            cout<<"Cant delete, the index is out of array limit.";
            return;
        }

        for(int j = 0; j<s->var1; j++)
        {
            if(j==k)
            {
               int temp = k+1;
               while(j<s->var1 && temp<s->var1)
               {
                   s->var2[j]=s->var2[temp];
                   j++;
                   temp++;
               }
               i--;
            }
        }
    }

   /* void show()
    {
        cout<<endl<<"var1 = "<<var1<<endl<<"var2 = "<<var2;
    }
    */


};

int main()
{
   // cout<<endl<<add(10, 20);
   // cout<<endl<<add(12.5, 15.5);
    TestTemplate <string>t1;
    //TestTemplate <string>t2(5);
    t1.setList1("KK");
    t1.setList1("LL");
    t1.getList1(0);


   // t2.show();
    return 0;
}


