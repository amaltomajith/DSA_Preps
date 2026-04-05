#include <bits/stdc++.h>
using namespace std;
int binary_search(vector <int> v, int target)
{
    int high = v.size();
    int low = 0;
    while (high >= low)
    {
        int mid = low + (high-low)/2;
        if (v[mid]==target)
        {
            return mid;
        }
        if (v[mid]>target)
        {
            high = mid-1;
        }
        if (v[mid]<target)
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
 vector <int> v  = {1,3,53,14,124,553,32,11,54};
 sort(v.begin(),v.end());
    int target;
    cin >> target;
    int key = binary_search (v,target);
    if (key == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Key found at index"<< key;
    }
}