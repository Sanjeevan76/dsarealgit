#include <iostream>
#include <vector>
#include <string>
#include <map> // Use map instead of unordered_map to maintain order

using namespace std;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp; // use map to preserve order of keys

        for (int i = 0; i < n; i++) {
            string s = to_string(nums[i]);
            int sum = 0;
            for (char ch : s) {
                sum += ch - '0';
            }
            mp[i] = sum;
        }

        for (auto &pair : mp) {
            if (pair.first == pair.second) {
                return pair.first;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 10, 11};

    int result = sol.smallestIndex(nums);
    cout << "Output: " << result << endl;

    return 0;
}
