// Bruteforce method O[n]
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                return n-i;
            }
        }
    }
};

// Efficient method O[log n]
class Solution {
   int countZeroes(int[] arr, int n) {
      int s = 0;
       int e = arr.length-1;
       while(s<=e){
           int mid = s + (e-s)/2;
           if(arr[mid]==0 && (mid==0 || arr[mid-1]==1)){
               return n-mid;
           }
           else if(arr[mid]==1){
               s=mid+1;
           }
           else if(arr[mid]==0){
               e=mid-1;
           }
       }
         return 1;
   }
}
