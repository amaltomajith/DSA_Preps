using namespace std;
#include <iostream>
#include <vector>
int main() {
    vector <int> nums = {2, 7, 11, 15};
    int target = 9;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return 0;
            }
        }
    }
}