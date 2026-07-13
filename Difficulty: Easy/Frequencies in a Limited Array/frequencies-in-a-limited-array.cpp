class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        // Create a result vector of size n initialized to 0
        vector<int> result(n, 0);
        
        // Count frequencies
        for (int i = 0; i < n; i++) {
            // Check if element is within the valid range 1 to n
            if (arr[i] >= 1 && arr[i] <= n) {
                // arr[i] - 1 maps the number (1 to n) to 0-based indexing (0 to n-1)
                result[arr[i] - 1]++;
            }
        }
        
        return result;
        
    }
};
