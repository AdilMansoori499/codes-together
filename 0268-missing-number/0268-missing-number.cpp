class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //brute approach
        int n=nums.size();
        int temp=0;
        for(int i=0;i<=n;i++)
        {
            int flag=0;
            for(int j=0;j<=n-1;j++)
            {
               if(nums[j]==i) 
               {
                flag=1;
                break;
               }
            
            }
            if(flag==0)
               temp=i;
        }
        return temp;
        
        
        
    }
};