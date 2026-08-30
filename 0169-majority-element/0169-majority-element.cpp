class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute solution
        int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     int count=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(nums[j]==nums[i])
        //         {
        //             count++;
        //         }
        //          if(count> n/2)
        //     {
        //         return nums[i];
        //     }
        //     }
            
        // }
        // return -1;


        //better solution using hashing
        //  map<int,int> mpp;
        //  for(int i=0;i<n;i++)
        //  {
        //     mpp[nums[i]]++;
        //  }
        //  for(auto it: mpp)
        //  {
        //     if(it.second>n/2)
        //     {
        //         return it.first;
        //     }
        //  }
            
        //  return -1;


        //optimal solution moore voting algo

        int count=0;
        int el;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                el=nums[i];
            }
            else if(nums[i]==el)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==el)
            {
                cnt++;
            }
            if(cnt>n/2)
            {
                return el;
            }
        }

        return -1;
    }
};