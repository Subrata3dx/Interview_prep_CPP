#include <iostream>
#include<vector>


using namespace std;

//one buy and one sell
int profit_1(vector<int>stock)
{
    int profit = 0;
    int minPrice = stock[0];

    for(int i = 0; i<stock.size(); i++)
    {
        profit = max(profit, stock[i]-minPrice);
        minPrice = min(minPrice, stock[i]);

    }

    return profit;

}

//buy and sell daily and at max one stock can be hold
int profit_2(vector<int>stock)
{
    int profit = 0;

    for(int i = 1; i<stock.size(); i++)
    {
        if(stock[i]>stock[i-1])
        profit = profit + stock[i]-stock[i-1];


    }

    return profit;

}


int main()
{

    vector<int> v = {20, 40, 10, 50, 25, 60, 5};

    cout << "Max profit_1: "<<profit_1(v) << endl;

    cout << "Max profit_2: "<<profit_2(v) << endl;

    return 0;
}
