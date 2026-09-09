class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute solution
    //     int n=nums.size();
    //     int longest=1;
    //     if(n==0)
    //     {
    //         return 0;
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //        int x=nums[i];
    //        int count=1;
    //        while(linearsearch(nums,x+1)==true)
    //        {
    //              x++;
    //              count++;
    //        }
    //        longest=max(longest,count);
    //     }
    //     return longest;
    // }
    // int linearsearch(vector<int>& nums,int num)
    // {
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         if(nums[i]==num)
    //         {
    //             return true;
    //         }
    //     }
    //     return false;




        //better solution
        // int n=nums.size();
        // if(n==0)
        // {
        //     return 0;
        // }
        // int longest=1;
        // int lastelement=INT_MIN;
        // int count=0;
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<n; i++)
        // {
        //     if(nums[i]-1==lastelement)
        //     {
        //         lastelement=nums[i];
        //         count+=1;
        //     }
        //     else if(lastelement!=nums[i])
        //     {
        //         count=1;
        //         lastelement=nums[i];
        //     }
        //     longest=max(longest,count);
        // }
        // return longest;


        //optimal solution

        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        int longest=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto it : st)
        {
               if(st.find(it-1)==st.end())
               {
                  int count=1;
                  int x=it;
                  while(st.find(x+1)!=st.end())
                  {
                    x=x+1;
                    count+=1;

                  }
                  longest=max(longest,count);

               }
        }
        return longest;
        
    }  

};