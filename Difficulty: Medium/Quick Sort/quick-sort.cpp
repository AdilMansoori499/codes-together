class Solution {
  public:
  int partition(vector<int>& arr, int low, int high) {
         int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(arr[i]<=pivot && i<high){
            i++;
            }
            
                while(arr[j]>pivot && j>low){
                j--;
                }
                if(i<j)
                {
                    swap(arr[i],arr[j]);
                }
        }
        swap(arr[low],arr[j]);
        return j;
        
    }
     void qs(vector<int>& arr,int low,int high)
      {
        if(low<high){
       int mid = partition(arr,low,high);
        qs(arr,low,mid-1);
        qs(arr,mid+1,high);
        }
      }
    void quickSort(vector<int>& arr, int low, int high) {
        int n=arr.size();

        qs(arr,0,n-1);


        
    }

    
};