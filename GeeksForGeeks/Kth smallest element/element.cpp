class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // Sort the given array
        r++;
        sort(arr, arr + r);
 
        // Return k'th element in the sorted array
        return arr[k - 1];
    }
};
