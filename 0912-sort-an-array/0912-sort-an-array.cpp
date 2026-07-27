class Solution {
public:
    int quicksort(vector<int>& nums,int l, int h)
     {
        int pivot=nums[l];
        int i=l;
        int j=h;
        while(i<j)
        {
            while(nums[i]<=pivot && i<h){
            i++;
            }
            
                while(nums[j]>pivot && j>l){
                j--;
                }
                if(i<j)
                {
                    swap(nums[i],nums[j]);
                }
        }
        swap(nums[l],nums[j]);
        return j;
     }
     void qs(vector<int>& nums,int l,int h)
      {
        if(l<h){
       int mid = quicksort(nums,l,h);
        qs(nums,l,mid-1);
        qs(nums,mid+1,h);
        }
      }
    vector<int> sortArray(vector<int>& nums) {
       int n=nums.size();

        qs(nums,0,n-1);

    return nums;
    }

};