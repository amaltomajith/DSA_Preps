#include <bits/stdc++.h>
using namespace std;
void spiralprint(vector <vector <int>> mx)
{
    int n = mx.size();
    int m = mx[0].size();
    int top = 0, bottom = n-1;
    int left = 0, right = m-1;
    while (left<=right && top<=bottom)
    {
        for (int i = left; i <=right; ++i)
        {
        cout << mx[top][i] << endl; 
    }
    top++;
        for (int i = top; i <= bottom; ++i)
        {
            cout << mx[i][right] <<endl;
        }
        right--;
        if (left<=right)
        for (int i = right; i >= left; --i)
    {
        cout << mx[bottom][i] <<endl;
    }
    bottom--;
        if(top<=bottom)
        {
            for(int i = bottom; i >= top; --i)
            {
                cout << mx[i][left]<<endl;
            }
             left++;
        }
    }

}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    spiralprint(matrix);
    return 0;
}