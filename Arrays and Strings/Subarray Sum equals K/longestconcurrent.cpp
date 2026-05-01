#include <bits/stdc++.h>
using namespace std;
int concurrent(vector <int> arr)
{
    int n = arr.size();
    if (n==0) return 0;
    unordered_set <int> hashh;
    int count = 0;
    int currnum = 0;
    int currentstreak = 0;
    int maxstreak = 0;
    for (int i = 0; i < n; i++)
    {
     hashh.insert(arr[i]);
    }
    for (const auto it : hashh)
    {
        if (hashh.find(it-1) == hashh.end())
        { 
            currnum = it; 
            currentstreak = 1;
        
        while (hashh.find(currnum + 1) != hashh.end())
        {
            currnum+=1;
            currentstreak+=1;


        }
       maxstreak = max(maxstreak,currentstreak);
    }
}
    return maxstreak;

}
int main()
{
    vector <int> arr = {0,5,1,4,6,2,3,6,101,224,103};
    int longest = concurrent(arr);
    cout << longest; 
}