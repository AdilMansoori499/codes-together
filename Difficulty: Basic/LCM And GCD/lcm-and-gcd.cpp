class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
      //gcd  
        int gcd=1;
        for(int i=1; i<=min(a,b); i++)
        {
            if(a%i==0 && b%i==0 )
            {
                gcd=i;
            }
        }
        //lcm
        int lcm=(a*b)/gcd;
        vector<int>ans;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
        
    }
};