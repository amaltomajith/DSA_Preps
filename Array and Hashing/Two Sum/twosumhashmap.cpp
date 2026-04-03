#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public: 
    vector <int> twoSum = {2, 7, 11, 15};
    int target = 9;
    vector<int> twosumfunc() {
        unordered_map<int, int> seen;
        for (int i = 0; i < twoSum.size(); i++) {
            int complement = target - twoSum[i];
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            seen[twoSum[i]] = i;
        }
        return {};
    }
};
int main() {
    Solution solution;
    vector<int> result = solution.twosumfunc();
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}