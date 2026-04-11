#include <bits/stdc++.h>
using namespace std;
vector <vector <string>> groupanagram (vector <string> &s)
{
    unordered_map<string, vector <string>> out;
    vector <vector <string>> result;
    for (const auto &it : s)
    {
        string label = it;
        sort (label.begin(), label.end());
        out[label].push_back(it);
    }
    for (const auto &it : out)
    {
        result.push_back(it.second);
    }
    return result;

}
int main()
{
     vector <string> ss = {"cat","tac","elbow","below","apple","apply"};
     vector<vector<string>> outcome = groupanagram(ss);
     cout << "[" << " ";
     for (const auto & it : outcome)
     {
        cout << " [" << "";
        for (const string &it2 : it)
        {
            cout << it2 << "";
        }
             cout << "]" <<endl;

     }
     cout << "]" <<endl;

}