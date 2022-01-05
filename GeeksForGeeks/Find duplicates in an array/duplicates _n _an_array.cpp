#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> duplicate;
        sort(arr, arr+n);
        
        int num = INT_MIN;
        for(int i=1; i<n; i++){
            if(arr[i]==arr[i-1] && num!=arr[i]){
                num = arr[i];
                duplicate.push_back(arr[i]);
            }
        }
        
        if(duplicate.empty()){
            duplicate.push_back(-1);
        }
        
        return duplicate;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
