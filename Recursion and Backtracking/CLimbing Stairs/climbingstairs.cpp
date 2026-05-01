#include <bits/stdc++.h>
using namespace std;
int climb(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else 
    {
        return climb(n-1)+climb(n-2);
    }
}
int main()
{
    int n = 10;
    int output = climb(n);
    cout << output;
}