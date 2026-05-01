#include <bits/stdc++.h>
using namespace std;
void comb(int i,vector <int> arr, vector <int> sample, int target, int sum)
{
    if(sum==target)
    {
        for (auto &it :sample)
        {
            cout << it << endl;
        
        }
        return;
    }
    if(sum>target || i == arr.size())
    return;
    sample.push_back(arr[i]);
    comb(i,arr,sample,target,sum+arr[i]);
    sample.pop_back();
    comb(i+1,arr,sample,target,sum);

}
int main()
{
    vector <int> arr = {1,2,3,4};
    vector <int> sample;
    int target, sum,i;
    comb(0,arr,sample,7,0);
}