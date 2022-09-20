class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> a;
        
        // making a string or vector of chars without non-alphanumeric characters
        for(auto x:s){
            if(isalnum(x)){
                a.push_back(tolower(x));
            }
        }
        
        // Checking if it is palindrome
        int low = 0, high = a.size()-1;
        while(low<high){
            if(a[low] != a[high]){
                return false;
            }
            low++;
            high--;
        }
        
        return true;
    }
};
