#include <bits/stdc++.h>
using namespace std;
void per(int left, int right,string &arr)
{
    if(left == right)
    {
        cout << arr << endl;
    }
    else
    {
        for(int i = left; i <=right; i++)
        {
            swap(arr[i],arr[left]);
        
        per(left+1,right,arr);
        swap(arr[left],arr[i]);

    }
}
}
int main()
{
    string data = "ABC";
    int n = data.size();
    per(0,n-1,data);

    return 0;
}