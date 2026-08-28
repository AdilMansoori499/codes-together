class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute solution
        int n=nums.size();
//         vector<int> arr;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//  //fix sum=nums[i]+nums[j] with direct in if condition
//                 if(nums[i]+nums[j]==target)
//                 {
//                     arr.push_back(i);
//                     arr.push_back(j);
//                 }
//             }
//         }
//         return arr;




        //optimal solution using hash
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int more=target-a;
            if(mpp.find(more)!=mpp.end())
            {
                return{mpp[more],i};
            }
            mpp[a]=i;
        }
        return{};

        
    }
};