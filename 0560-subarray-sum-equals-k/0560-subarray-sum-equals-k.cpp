class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

     //   brute solution
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            sum=nums[i];
            if(sum==k){
                ans++;

            }
            for(int j=i+1;j<n;j++)
            {
                sum+=nums[j];
                if(sum==k)
                {
                 ans++;
                }

            }
        }
        return ans;


        //better solution
        // map<long long,int> presummap;
        // long long sum=0;
        // int ans=0;
        // for(int i;i<n;i++)  
        // {
        //     sum+=nums[i];
        //     if(sum==k)
        //     {
        //         ans++;
        //     }
        //     int rem=sum-k;
        //     if(presummap.find(rem)!=presummap.end())
        //     {
        //         sum+=nums[i];
        //         ans++;
        //     }
        // }      

        // return ans;
    }
};