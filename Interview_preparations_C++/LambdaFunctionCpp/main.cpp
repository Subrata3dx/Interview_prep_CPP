#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


/*class MultiplyBy {
private:
    int factor;
public:
    MultiplyBy(int k, int p) : factor(k) {}
    int operator()(int x) const {
        return x * factor;
    }
};
*/

/*
int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    //MultiplyBy(3);
    for(int i=0; i<vec.size(); i++)
    {
        vec[i] = (i+1)*10;
    }
    */
    /*
   std::transform(vec.begin(), vec.end(), vec.begin(), [](int k){return k*10;});

    for (int val : vec) {
        std::cout << val << " ";
    }
    return 0;
}

*/



/*
class Functor
{
private:
    int x;
public:
    Functor()
    {
        x = 100;

    }

    int operator()(int t)
    {
       // cout<<endl<<x+t;
        return x+t;
    }

};

void fun(int x, Functor f)
{
cout<<f(10)<<endl;

}


int main()
{

/*
    int y = 10, z = 20, t = 4, p = 89;

    [=, &z, &t]{
        cout << "Hello world!" << endl;
        cout << "Hello Suman" << endl;
        cout << "Hello bhai" << endl;
        cout<<endl<<"a=" <<a;

        y=1001;
        int k = 55;
        cout<<endl<<"y=" <<y;
        cout<<endl<<"k=" <<k;
        z=40;
        cout<<endl<<"z=" <<z;
        t=5;
        cout<<endl<<"t=" <<t;
        return t+z;
    }();

   cout<<endl<< x(100);

*/
/*
   int a = 10, b = 20, c = 40;

    Functor gh;
    cout<<endl<<"a + b + c = " <<[=, &b ] {return a+b+c;}();
    cout<<endl;
    fun(1, gh);
    cout<<endl;
    cout<<gh(10);

    getchar();
    return 0;
}


/*
int main()
{

    //calling lambda function without any variable directly in the cout.Uses of () at the end of function is required
   cout << []() -> char { cout << "Hello world!" << endl;
        return 's';
    } ()<< endl;


    getchar();
    return 0;
}

*/


//#include <iostream>

// Functor to accumulate values
class Accumulator {
private:
    int sum;

public:
    Accumulator() : sum(0) {}

    void operator()(int x) {
        sum += x;
    }

    int getSum() const {
        return sum;
    }
};

int main() {
    Accumulator acc(100);
    acc(10);
    acc(20);
    acc(30);

    std::cout << "Total sum: " << acc.getSum() << std::endl;
    return 0;
}




