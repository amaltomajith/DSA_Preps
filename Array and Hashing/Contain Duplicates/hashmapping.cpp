#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool containdDuple(vector<int> &numd)
{
    unordered_set<int> notebook;
    for (int i = 0; i < numd.size(); i++) {
        int currentdigit = numd[i];
        if (notebook.count(currentdigit))
        {
            return true;
        }
        else
        {
            notebook.insert(currentdigit);
        }
    }
    return false;
}
int main()
{
    vector<int> numbers = {1,2,4,5};
    bool result = containdDuple(numbers);
    if (result) {
        cout << "Contains Duplicates" << endl;
    } else {
        cout << "No Duplicates Found" << endl;
    }
}