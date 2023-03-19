class Solution{
    public:
    
    void rotateArr(int arr[], int d, int n){
        
        d %= n;
        
        reverse(arr, arr+d);
        reverse(arr + d, arr+n);
        reverse(arr, arr+n);
    }
};
