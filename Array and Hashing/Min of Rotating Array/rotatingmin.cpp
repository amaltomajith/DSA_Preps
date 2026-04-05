#include <bits/stdc++.h>
using namespace std;
int rotatingmin(vector <int> v)
{
    int mid;
    int high = v.size()-1;
    int low = 0;
    while (low < high)
    {
        mid = low + (high-low)/2;
        if (v[mid]>v[high])
        {
            low = mid+1;
        }
        if (v[mid]<v[high])
        {
            high = mid;
        }

    }
    return v[low];
}
int main()
{
 vector <int> v  = {1,3,53,14,124,553,32,11,54};
 sort(v.begin(),v.end());
 int mini = rotatingmin(v);
 cout << mini;
 return 0;
}