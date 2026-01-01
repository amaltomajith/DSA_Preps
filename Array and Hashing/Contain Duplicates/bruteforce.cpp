#include<iostream>
#include<vector>
using namespace std;

bool containsDuplicate(vector <int> & nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) //because we dont need to compare previous elements
        {
            if (nums[i]==nums[j]) {
                return true;
            }

        }
    }
    return false;
}
int main () {
    vector <int> numbers = {1,2,4,5,1};
    bool result = containsDuplicate(numbers);
    if (result) {
        cout << "Contains Duplicates" << endl;
    } else {
        cout << "No Duplicates Found" << endl;
    }
}