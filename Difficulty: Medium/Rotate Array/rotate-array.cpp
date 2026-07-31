#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) return;

        // Step 1: Normalize d in case d >= n
        d = d % n;
        if (d == 0) return;

        // Step 2: Reverse the first d elements [0 to d-1]
        reverse(arr.begin(), arr.begin() + d);

        // Step 3: Reverse the remaining n - d elements [d to n-1]
        reverse(arr.begin() + d, arr.end());

        // Step 4: Reverse the entire array [0 to n-1]
        reverse(arr.begin(), arr.end());
    }
};