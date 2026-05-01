#include <bits/stdc++.h>
using namespace std;
vector <int> arre(vector <int> arr, int d)
{
    int n = arr.size();
    vector <int> temp(d);
    for (int i = 0; i < d; i++)
    {
          temp[i] = arr [i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }
    for (int i = 0; i < d;i++ )
    {
        arr[n-d+i]= temp[i];
    }
    return arr; 
}
int main()
{
    vector <int> arr = {1,2,3,4,5,6};
    int d = 2;
    vector <int> arrout = arre(arr,d);
    for (const auto & it : arrout)
    {
        cout << it;
    }
    
}