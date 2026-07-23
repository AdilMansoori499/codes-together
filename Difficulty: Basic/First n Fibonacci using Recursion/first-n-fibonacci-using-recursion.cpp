class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        vector<int> result;
        if(n>=1)
        result.push_back(0);
        if(n>=2)
        result.push_back(1);
        for(int i=2;i<n;i++)
        {
            int fibo=result[i-2] + result[i-1];
            result.push_back(fibo);
        }
        return result;
    }
};