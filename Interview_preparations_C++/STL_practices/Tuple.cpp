#include<iostream>
#include<tuple>
using namespace std;


int main()
{
tuple <string, int, int> t1;
t1 = make_tuple("Krishna", 143, 16108);
std::cout<<get<0>(t1)<<std::endl;
std::cout<<get<1>(t1)<<std::endl;;
std::cout<<get<2>(t1);

return 0;
}
