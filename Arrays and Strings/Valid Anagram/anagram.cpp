#include <bits/stdc++.h>
using namespace std;
bool isanagram(string s, string t)
{
    int s_len = s.length();
    int t_len = t.length();
    int arr[26] = {0};
    if (s_len != t_len) return false;
    for (int i = 0; i < s_len; i++)
    {
        arr[s[i] - 'a']++;
        arr[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]!=0)
        return false;
    }
    return true;

}
int main()
{
    string s = "apple";
    string t = "apply";
    if (isanagram(s,t))
    {
        cout << "YEAH!" << endl;
    }
    else 
    {
        cout << "NO!" << endl;
    }
}