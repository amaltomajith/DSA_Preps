#include <bits/stdc++.h>
using namespace std;

string minwindow(string arr, string k) {
    int n = arr.size();
    int m = k.size();
    if (m > n) return "";

    int hashh[256] = {0};

    for (int i = 0; i < m; i++) {
        hashh[k[i]]++; 
    }

    int r = 0, l = 0, count = 0;
    int minelement = INT_MAX;
    int s_index = -1;

    while (r < n) {

        if (hashh[arr[r]] > 0) {
            count++;
        }
        hashh[arr[r]]--;

        while (count == m) {
            if (r - l + 1 < minelement) {
                minelement = r - l + 1;
                s_index = l;
            }


            hashh[arr[l]]++;
            if (hashh[arr[l]] > 0) {
                count--;
            }
            l++;
        }
        r++; 
    }

    return s_index == -1 ? "" : arr.substr(s_index, minelement);
}
int main()
{
    string s1 = "aaabbbcccda", s2 = "abc";
    string substr = minwindow(s1,s2);
    cout << substr;
}