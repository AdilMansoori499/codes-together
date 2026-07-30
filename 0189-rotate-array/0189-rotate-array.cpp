#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        // Step 1: Normalize k in case k >= n
        k = k % n;

        // Step 2: Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Step 3: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 4: Reverse the remaining (n - k) elements
        reverse(nums.begin() + k, nums.end());
    }
};