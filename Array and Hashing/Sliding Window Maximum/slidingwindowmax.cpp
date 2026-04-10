#include <bits/stdc++.h>
using namespace std;
vector <int> slidingwindowmax (vector <int> vi, int k)
{
    deque <int> dq; 
    vector <int> res;
    for (int i = 0; i < vi.size(); i ++)
    {
        if (!dq.empty() && dq.front()==i-k)
        {
            dq.pop_front();
        }
        while (!dq.empty()&& vi[dq.back()]<vi[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i>=k-1)
        {
            res.push_back(vi[dq.front()]);
        }
    }
    return res;
    
}
int main()
{
 vector <int> vec = {15,12,45,11,22,42};
 int key = 2;
 vector <int> sol = slidingwindowmax(vec,key);
 for (const int it : sol)
 {
    cout << it << ", ";
 }
 return 0;
}