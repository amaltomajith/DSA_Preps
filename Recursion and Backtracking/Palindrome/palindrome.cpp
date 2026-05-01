#include<bits/stdc++.h>
using namespace std;
int ispalindrome(int i,const string &s)
{
    int n = s.size();
    if(i == n/2)
    {
        return 1;
    }
    if(s[i]!=s[n-i-1])
    {
        return 0;
    }
    return ispalindrome(i+1,s);

}
int main()
{
    string st;
    cin >> st;
    if(ispalindrome(0,st))
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
    return 0;
}