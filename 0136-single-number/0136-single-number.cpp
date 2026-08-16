class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        //brute approach
        // int num=0;
        // for(int i=0;i<n;i++)
        // {
        //     num=nums[i];
        //     int count=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(nums[j]==num)
        //         {
        //             count++;
        //         }
        //     }
        //     if(count==1)
        //     {
        //         return num;
        //     }
        // }
        // return num;
                      
        
        //xor method(optmal solution)
        int xor2=0;
        for(int i=0;i<n;i++)
        {
            xor2=xor2^nums[i];
        }
        return xor2;
    }
};