class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k){
        vector<int> v;
        
        for(int i=0; i<n; i++){
            v.push_back(arr1[i]);
        }
        
        for(int i=0; i<m; i++){
            v.push_back(arr2[i]);
        }
        
        sort(v.begin(), v.end());
        
        return v[k-1];
    }
};
