#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0; i<row; i++ )
        {
            for(int j = 0; j<col; j++)
            {
                int val = matrix[i][j];
                if(val==0)
                {
                    makeZero(matrix, i, j, row, col);
                    //return;
                }
            }
        }
    }

    void makeZero(vector<vector<int>> &matrix, int i, int j, int row, int col)
    {
        int t = i-1;
        while(t >=0)
        {
            matrix[t][j] = 0;
            t--;
        }

        t = j-1;
        while(t >=0)
        {
            matrix[i][t] = 0;
            t--;
        }

        t = j+1;
         while(t < col)
        {
           int val = matrix[i][t];
            if(val == 0)
            {
            makeZero(matrix, i, t, row, col);
            }
            matrix[i][t] = 0;
            t++;
        }

        t = i+1;
        while(t < row)
        {
           int val = matrix[t][j];
            if(val == 0)
            {
            makeZero(matrix, t, j, row, col);
            }
            matrix[t][j] = 0;
            t++;
        }


    }
};

void print(vector <vector<int>> & v){
for(int i =0; i<4; i++)
    {

        for(int j = 0; j<4; j++)
        {

            cout<<v[i][j] << " ";
        }
        cout<<endl;
    }
}

int main()
{
    vector <vector<int>> v = {{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
    Solution so;
    print(v);
    so.setZeroes(v);

    cout<<endl<<endl;
    print(v);
    return 0;
}
