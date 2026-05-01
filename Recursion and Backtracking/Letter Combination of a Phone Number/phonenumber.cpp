#include<bits/stdc++.h>
using namespace std;
void num(int index, string &ref,string &sor,vector <string> &curr,vector <string> &res)
{
if(index==ref.length())
{
    res.push_back(sor);
    return;
}
int digit = ref[index]-'0';
string letter = curr[digit];
for (auto & it :letter)
{
    sor.push_back(it);
    num(index+1,ref,sor,curr,res);
    sor.pop_back();
}
}
int main()
{
    int index;
    string ref = "23";
    string sor = "";
    vector <string> curr = {"","", "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    vector <string> res;

    num(0,ref,sor,curr,res);
    for (auto it : res)
    {
        cout << it;
    }
    cout <<endl;
    return 0;
}


