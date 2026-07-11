class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long current_factorial = 1;
        long long i = 1;
        
        while (current_factorial <= n) {
            result.push_back(current_factorial);
            
            i++;
            current_factorial = current_factorial * i;
        }
        
        return result;
        // Write Your Code here
         
    }
};