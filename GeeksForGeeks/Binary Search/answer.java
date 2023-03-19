class Solution {
    int binarysearch(int arr[], int n, int k) {
        int high = n-1;
        int low = 0;

        while(low<=high){
            int mid = (high+low)/2;

            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
}
