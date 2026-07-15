class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        /*APPROACH-1
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){swap(arr[i],arr[j]);}
            }
        } */
        
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                while(arr[j]<arr[min]){
                    min=j;
                    swap(arr[j],arr[min]);
                }
            }
            swap(arr[i],arr[min]);
        }
    }
};