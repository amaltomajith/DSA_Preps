#include <bits/stdc++.h>
using namespace std;
int nonrepeatlong(string s)
{
    vector <int> v1 (128,-1);
    int left = 0;
    int maxfound = 0;
    for (int right = 0; right < s.length(); right++)
    {
        char current = s[right];
        if (v1[current]>= left)
        {
            left = v1[current]+1;
        }
        v1[current] = right;
        maxfound = max(maxfound, right - left + 1);
    }
    return maxfound; 
}
int main()
{
    string s1;
    cin >> s1;
    int leng = nonrepeatlong(s1);
    cout << leng;
    return 0;

}