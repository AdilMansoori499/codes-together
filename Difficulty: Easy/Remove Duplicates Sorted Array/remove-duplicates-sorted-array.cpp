#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int>& arr) {
        if (arr.empty()) return {};

        int i = 0; // Pointer to place unique elements

        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }

        // Keep only unique elements up to index 'i'
        arr.resize(i + 1);
        return arr;
    }
};