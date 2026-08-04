#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> prefixMap;
        
        // Base case: A prefix sum of 0 has occurred once before starting iteration
        prefixMap[0] = 1;
        
        int currentSum = 0;
        int count = 0;
        
        for (int num : nums) {
            currentSum += num;
            
            // If (currentSum - k) exists, it means we found subarray(s) summing to k
            if (prefixMap.find(currentSum - k) != prefixMap.end()) {
                count += prefixMap[currentSum - k];
            }
            
            // Increment frequency of the current prefix sum
            prefixMap[currentSum]++;
        }
        
        return count;
    }
};