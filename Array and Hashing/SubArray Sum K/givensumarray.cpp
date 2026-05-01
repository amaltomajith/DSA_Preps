#include <bits/stdc++.h>
using namespace std;
int givensum(vector <int> arr, int k)
{
    int n = arr.size();
    unordered_map <int,int> mpp;
    int runningsum = 0;
    int count = 0;
    mpp[0]=1;
    for (int i = 0; i < n; i++)
    {
        runningsum += arr[i];
        if(mpp.find(runningsum - k)!=mpp.end())
        {
            count += mpp[runningsum - k];
        }
        mpp[runningsum]++;
    }
    return count;
}
int main()
{
    int k;
    vector <int> arr = {1,4,2,5,-4,1,3,-5,1,-1,-2};
    cin >> k;
    int output = givensum(arr,k);
    cout << output << endl;
}