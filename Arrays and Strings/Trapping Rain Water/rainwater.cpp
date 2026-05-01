#include <bits/stdc++.h>
using namespace std;
int rainwater(vector <int> v1)
{
    int n = v1.size();
    vector <int> leftie(n);
    int total = 0;
    leftie[0]=v1[0];
    for (int i =1; i<n; i++)
    {
        leftie[i] = v1[i];
        leftie[i] = max(v1[i],leftie[i-1]);
    }
    vector <int> rightie(n);
    rightie[n-1]=v1[n-1];
    for (int i = n-2; i>=0 ; i--)
    {
        rightie[i] = v1[i];
        rightie[i] = max(v1[i],rightie[i+1]);
    }
    for (int i = 0; i < n; i++)
    {
        if(leftie[i]>v1[i] && rightie[i]>v1[i])
        {
            total += min(leftie[i],rightie[i]) - v1[i]; 

       }
    }
    return total;


}
int main()
{
    vector <int> arr = {1,2,5,4,2,1,5,1,2};
    int total = rainwater(arr);
    cout << total << endl;
}