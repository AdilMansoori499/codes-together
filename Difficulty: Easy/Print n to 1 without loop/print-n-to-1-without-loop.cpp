class Solution {
  public:
    void printNos(int n) {
        helper(n,n);
    
        
    }
    void helper(int i,int n)
    {
        if(i<1)
        return;
        cout<<i<<" ";
        helper(i-1,n);
    }
};