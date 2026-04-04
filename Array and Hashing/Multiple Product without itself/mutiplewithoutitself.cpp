#include <bits/stdc++.h>
using namespace std;
vector <int> v1 (vector <int> vec)
{
    int n = vec.size();
    vector <int> res (n,1);
    int leftrunningproduct=1;
    {
    for (int i = 0 ; i < n; i++)
    {
        res[i] = leftrunningproduct;
        leftrunningproduct *= vec[i];
    }
    int rightrunningproduct = 1;
    for (int i = n-1; i>=0;i--)
    {
        res[i] = rightrunningproduct;
        rightrunningproduct *= vec[i];
    }
    return res;

}
}

int main()
{
    vector <int> va = {1,2,3,4};
    vector <int> result = v1(va);
    for (int &x : result)
    {
        cout << x << endl;
    }
    return 0;
    

}