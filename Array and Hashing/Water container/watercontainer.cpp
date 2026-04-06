#include <bits/stdc++.h>
using namespace std;
int watercontainer(vector <int> v)
{
    int low = 0;
    int high = v.size()-1;
    int maxarea = 0;
    while (low < high)
    {
        int length = high - low;
        int height = min(v[high],v[low]);
        int area = length * height;
        maxarea = max(area,maxarea);

        if(v[low]<v[high])
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return maxarea; 

}
int main()
{
    vector <int> v = {3,1,5,3,1,3,5,6};
    int area = watercontainer(v);
    cout<<area;

}