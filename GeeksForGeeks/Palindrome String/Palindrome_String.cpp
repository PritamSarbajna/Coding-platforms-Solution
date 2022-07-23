class Solution{
public:	
	
	int isPalindrome(string S){
	    
	    int l = 0;
	    int r = S.length()-1;
	    
	    while(l<r){
	        if(S[l] != S[r]){
	            return 0;
	        }
	        
	        l++;
	        r--;
	    }
	    return 1;
	}

};
