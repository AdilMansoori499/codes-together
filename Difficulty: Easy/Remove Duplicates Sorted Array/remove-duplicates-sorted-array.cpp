class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
             int n=arr.size();
             vector<int> brr;
             brr.push_back(arr[0]);
        int i=0;
        for(int j=0;j<=n-1;j++)
        {
            if(arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
                brr.push_back(arr[j]);
            }
        }
        return brr;
        
    
    }
};