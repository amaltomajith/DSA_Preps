#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> matrix (vector <vector<int>> matrics)
{
    int n = matrics.size()  ;
    int m = matrics[0].size()  ;
    vector <int> rows(n,0);
    vector <int> cols(m,0);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrics[i][j]== 0)
            {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(rows[i] == 1|| cols [j] ==1)
            {
                matrics[i][j] = 0;
            }
        }
    }
    return matrics;
}
int main()
{
    vector<vector<int>> mtx = {{1,1,0},{0,1,1},{1,1,1}};
    vector <vector <int>> matrr = matrix(mtx);
    for (int i =0; i < matrr.size(); i++)
    {
        for(int j = 0; j < matrr[0].size(); j++)
        {
            cout << matrr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}