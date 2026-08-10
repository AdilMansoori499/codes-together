class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //brute approach
        // int n=nums.size();
        // int temp=0;
        // for(int i=0;i<=n;i++)
        // {
        //     int flag=0;
        //     for(int j=0;j<=n-1;j++)
        //     {
        //        if(nums[j]==i) 
        //        {
        //         flag=1;
        //         break;
        //        }
            
        //     }
        //     if(flag==0)
        //        temp=i;
        // }
        // return temp;
        

       // optimal1 solution sum
    //    int n=nums.size();
    //    int sum=(n*(n+1))/2;
    //    int sum1=0;
    //    int temp=0;
    //    for(int i=0;i<n;i++)
    //    {
    //     sum1+=nums[i];
    //    }
    //    temp=sum-sum1;
    //    return temp;


   // optimal2 solution xor
   int n=nums.size();
   int xor1=0;
   for(int i=0;i<=n;i++)
   {
    xor1=xor1^i;
   }
   int xor2=0;
   for(int i=0;i<n;i++)
    {
        xor2=xor2^nums[i];
    }
    return xor1^xor2;



        
        
    }
};