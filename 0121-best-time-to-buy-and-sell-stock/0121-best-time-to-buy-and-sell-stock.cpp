class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int minimum=prices[0];
        int cost=0;
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-minimum;
            profit=max(profit,cost);
            minimum=min(minimum,prices[i]);
        }
        
        return profit;
    }
};