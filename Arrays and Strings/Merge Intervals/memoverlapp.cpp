#include<bits/stdc++.h>
using namespace std;
vector <vector <int>> arr (vector <vector <int>> arra)
{
    int n = arra.size();
    vector<vector<int>> space;
    sort(arra.begin(), arra.end());
    for (int i = 0; i < n; i++)
    {
        if (space.empty() || space.back()[1]<arra[i][0])
        {
            space.push_back(arra[i]);
        }
        else
        {
            space.back()[1] = max(space.back()[1],arra[i][1]);
        }
    }
    return space;


}
int main()
{
    vector <vector <int>> arrayy = {{1,4},{3,7},{9,12},{6,15},{20,25}};
    vector<vector<int>> outt = arr(arrayy);
    for (const auto & it: outt)
    {
        cout << "(" << it[0] <<","<< it[1] <<")"<< endl;
    }
    return 0;
}