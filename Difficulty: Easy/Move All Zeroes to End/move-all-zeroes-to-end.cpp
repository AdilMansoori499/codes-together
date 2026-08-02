class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        //brute solution
        int n=arr.size();
        vector<int> temp;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!= 0)
            {
                temp.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<temp.size();i++)
        {
            arr[i]=temp[i];
        }
         int nonzero=temp.size();
         for(int i=nonzero;i<n;i++)
         {
             arr[i]=0;
         }
    }
};