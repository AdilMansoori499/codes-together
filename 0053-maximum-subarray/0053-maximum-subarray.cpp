class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //better solution
        // int n=nums.size();
        // int maximum=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //           sum+=nums[j];
        //           maximum=max(sum,maximum);
        //     }
        // }
        // return maximum;


        //optimal solution
        //kadanes algorithm
        int n=nums.size();
        int maximum=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum>maximum)
            {
                maximum=sum;
            }
            if(sum<0)
            {
                sum=0;
            }

        }
        return maximum;
    }
};