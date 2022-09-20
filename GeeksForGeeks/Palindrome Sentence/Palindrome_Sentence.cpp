//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    vector<char> str;
	    
	    for(auto x:s){
	        if(isalnum(x))
	            str.push_back(x);
	    }
	    
	    int low = 0, high = str.size()-1;
	    while(low < high){
	        if(str[low] != str[high]){
	            return false;
	        }
	        low++; high--;
	    }
	    return true;
	}
};
