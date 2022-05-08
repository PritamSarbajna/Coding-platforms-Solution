class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int left = 0;
        int right = n-1;
        
        while(left <= right){
            int mid = (left+right) / 2;
            
            if(arr[mid] == k){
                return mid;
            }
            
            else if(k > arr[mid]){
                left = mid+1;
            }
            
            else{
                right = mid-1;
            }
        }
        return -1;
    }
};
