#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<pair<int, int>> allPairs(int x, vector<int>& a, vector<int>& b) {
        // Sort 'a' to guarantee increasing order of u
        sort(a.begin(), a.end());
        
        // Sort 'b' to enable binary search and handle duplicates correctly
        sort(b.begin(), b.end());
        
        vector<pair<int, int>> result;
        
        for (int u : a) {
            int v = x - u;
            
            // equal_range finds the range [first, second) of all occurrences of 'v' in 'b'
            auto range = equal_range(b.begin(), b.end(), v);
            
            for (auto it = range.first; it != range.second; ++it) {
                result.push_back({u, v});
            }
        }
        
        return result;
    }
};