class Solution{
    public:
    void segregateElements(int arr[],int n){
        int j = 0, k = n-1;
        
        int arr2[n];
        
        for(int i=0; i<n; i++){
            
            if(arr[i] > 0){
                arr2[j++] = arr[i];
            }
            
            if(arr[n-1-i] < 0) {
                arr2[k--] = arr[n-1-i];
            }
        }
        
        for(int i=0; i<n; i++) {
            arr[i] = arr2[i];
        }
    }
};
