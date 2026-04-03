#include<bits/stdc++.h>
using namespace std;
int maxsubarray()
{
    vector <int> v1 = {1,-2,-3,4,-1,6};
    int maxsum = INT_MIN;
    int ongoing = 0;

    for (const auto &it : v1)
    {

    ongoing += it;

    maxsum = max(maxsum,ongoing);

    if (ongoing<0)
    {
    ongoing = 0;
    }

    }
    return maxsum;
}
int main()
{
    
    int result = maxsubarray();
    cout << "Result is " << result << endl;
    return 0;
}