#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> v1(vector <int> vec)
{
    int n = vec.size();
    sort(vec.begin(), vec.end());
    vector <vector<int>> result;
    for (int i = 0; i < n -1; i++)
    {
        if (i > 0 && vec[i]==vec[i-1])
        continue;
        if (vec[i] > 0)
        break;
        int left = i+1;
        int right = n - 1;
        while (left < right)
        {
            int sum = vec[i]+vec[left]+vec[right];
            if (sum == 0)
            {
                result.push_back({vec[i],vec[left],vec[right]});
            while (left<right && vec[left]==vec[left+1]) 
            {
                left++;
            }
            while (left<right && vec[right]==vec[right-1])
            {
                right--;
            }

            left++;
            right--;
            }
            
            else if (sum > 0)
            {
                right--;
            }
            else if(sum < 0)
            {
                left++;
            }

        }

    }
    return result;
}
int main()
{
    vector <int> v = {1,4,-2,-5,5,0,-4,-1};
    vector <vector<int>> res = v1(v);
    for (const auto & it : res)
    {
        cout << "["<< it[0] <<","<< it[1] << "," << it[2] << "]" << endl;
    }
}

