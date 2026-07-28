class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest=arr[0];
        int n=arr.size();
        for(int i=0;i<=n-1;i++)
        {
            if(arr[i]>largest)
            {
                largest=arr[i];
            }
        }
        return largest;
    }
};
